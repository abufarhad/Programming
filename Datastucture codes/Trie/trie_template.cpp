#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

struct tri
{
    struct tri *child[26]; //alphabet size
    bool is_end_of_word;  // isEndOfWord is true if the node represents  end of a word

};

struct tri* getnode( )
{
    struct tri *pnode=new tri;
    pnode->is_end_of_word=false;

    fr(i,26)pnode->child[i]=NULL;

    return pnode;
};

void insert_string(struct tri *root, string s )
{
    struct tri *node=root;

    fr(i, s.size())
    {
        ll index=s[i]-'a';
        if( !node->child[index] )   node->child[index]=getnode();
        node=node->child[index];
    }
    node->is_end_of_word=true;
}

bool  search_string( struct tri *root , string s)
{
    struct tri *node=root;

    fr(i, s.size())
    {
        ll index=s[i]-'a';
        if( !node->child[index] ) return false;
        node=node->child[index];
    }
    return (node!=NULL && node->is_end_of_word );

}

int main()
{
    ll i,j,k,m,n,query;
    string s,s1;
    vector<string>v;
    cin>>n;
    fr(i,n) { cin>>s; v.pb(s);}

    struct tri *root=getnode(); //initialization

    fr(i,n)  insert_string(root , v[i]);

    printf("Enter query\n");
    cin>>query;

    while(query--)
    {
        cin>>s1;
        search_string(root, s1)?cout<<"YES\n":cout<<"NO\n";
    }
}
