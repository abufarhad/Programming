#include <bits/stdc++.h>
using namespace std;
#define INF 1<<30
#define MAX 100005
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
typedef long long ll;
const int ALPHABET = 26;
#define scale(x) (x - 'a')

struct TrieTree
{
    struct TrieTree *children[ALPHABET];
    bool isEndOfWord;
};

struct TrieTree *getNode()
{
    struct TrieTree *Node = new TrieTree;
    Node->isEndOfWord = false;

    for(int i = 0; i < ALPHABET; i++)
        Node->children[i] = NULL;
    return Node;
}

void insert(struct TrieTree *root, string s)
{
    struct TrieTree *curr = root;
    for(int i = 0; i < s.size(); i++)
    {
        int idx = scale(s[i]);
        if(!curr->children[idx])
            curr->children[idx] = getNode();

        curr = curr->children[idx];
    }
    // mark last node as leaf
    curr->isEndOfWord = true;
}

bool search(struct TrieTree *root, string s)
{
    struct TrieTree *curr = root;
    for(int i = 0; i < s.size(); i++)
    {
        int idx = scale(s[i]);
        if(!curr->children[idx])
            return false;

        curr = curr->children[idx];
    }
    return (curr != NULL && curr ->isEndOfWord);
}

bool isEmpty(TrieTree* root)
{
    for(int i = 0; i < ALPHABET; i++)
        if(root->children[i])
            return false;
    return true;
}

TrieTree* Remove(TrieTree* root, string s, int depth = 0)
{
    if(!root)
        return NULL;
    if(depth == s.size())
    {
        if(root->isEndOfWord)
            root->isEndOfWord = false;

        if(isEmpty(root))
        {
            delete(root);
            root = NULL;
        }
        return root;
    }

    int idx = scale(s[depth]);
    root->children[idx] = Remove(root->children[idx], s, depth+1);

    if(isEmpty(root) && root->isEndOfWord == false)
    {
        delete(root);
        root = NULL;
    }
    return root;
}


int main()
{

    string str[] = { "the", "a", "there",
                     "answer", "any", "by",
                     "bye", "their", "hero", "heroplane"
                   };


    int n = sizeof(str)/sizeof(str[0]);
    struct TrieTree *root = getNode();

    for(int i = 0; i < n; i++)
        insert(root, str[i]);

    // Search for different keys
    search(root, "the")? cout << "FOUND!\n" : cout << "NOT FOUND\n";
    search(root, "these")? cout << "FOUND!\n" : cout << "NOT FOUND\n";

    Remove(root, "heroplane");
    //  Remove(root, "hero");
    search(root, "hero") ? cout << "FOUND!\n" : cout << "NOT FOUND\n";

    return 0;
}
