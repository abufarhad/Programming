#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
string s,s1;
vector<string>v;
ll  j,k,m,n,query,last=1,f;

struct node
{
    node* child[27]={NULL};
     ll cnt=0;
} ;

void addnode( node* root , string name, ll cur)
{
    root->cnt+=1;
    if(cur==name.size() )return ;
    ll u=name[cur]-'a';

    if(!root->child[ u ] )  root->child[u]= new node();
    addnode(root->child[u], name, cur+1 );
}


ll findnode( node*root, string name, ll cur)
{
      ll u=name[cur]-'a';
      if(cur==name.size() )return root->cnt;
     else if(!root->child[ u ] )  return 0;
     else  return findnode( root->child[u] , name, cur+1);
}


int main()
{
    cin>>n;
    node *root=new node();
    string a,b;

    while(n--)
    {
        cin>>a>>b;
        if(a=="add") addnode(root, b,0 );
        else  cout<<findnode(root, b,0)<<endl;
    }
}



