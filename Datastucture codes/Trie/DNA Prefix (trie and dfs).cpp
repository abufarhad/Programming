#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
struct tri
{
    tri *child[4];
    ll cnt;
    tri()
    {
       //fr(i,4)child[i]=NULL;
       memset(child, NULL, sizeof(child));
       cnt=0;
    }
};


void insert_string( tri *root , string s)
{
    ll sz=s.size(), x;
    fr(i,sz)
    {
        if(s[i]=='A' ) x=0;
        else if(s[i]=='C' ) x=1;
        else if(s[i]=='G' ) x=2;
        else if(s[i]=='T' )  x=3;

        if( !root->child[x] ) root->child[x]=new tri();
        root=root->child[x];
        root->cnt++;
    }
}
ll mx=0;

void dfs(tri *root, ll level)
{
    ll tmp=root->cnt * level;
    if( tmp>mx ) mx=tmp;

    for(ll i=0;i<4;i++)
    {
        if(root->child[i])
            dfs(root->child[i], level+1 );
    }
}

void del(tri *root )
{
    fr(i,4)
    {
        if( root->child[i] )
            del( root->child[i]);
    }
    delete(root);
}

int main()
{
    ll i,j,t,m,n,k=1;
    cin>>t;
    while(t--)
    {
       tri *root=new tri();
        string s;
        cin>>n;
        while(n--)
        {
            cin>>s;
            insert_string( root, s);
        }
        dfs(root, 0);
        printf("Case %lld: %lld\n",k,mx);
        k++;
        del(root);
        mx=0;
    }
}
