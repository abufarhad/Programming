#include<iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#define ll long long
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
char s[26],s1[26];

struct tri
{
    tri *child[26];
    ll cnt,id;
    tri()
    {
        memset(child, NULL, sizeof(child));
        //child[26]={NULL};
        cnt=0;
        id=-1;
    }
};


void insert_string( tri *root, char *s,ll indx, ll id )
{
    for(ll i=indx; s[i] !='\0'; i++)
    {
        ll index=s[i]-'a';
        if( root->child[index] ==NULL) root->child[index]=new tri();
        root=root->child[index];

        if(root->id !=id)
        {
            root->id=id;
            root->cnt++;
        }
    }
}

ll   search_string( tri *root, char *s)
{
  //  struct tri *node=root;
    for(ll i=0; s[i] !='\0'; i++)
    {
        ll index=s[i]-'a';
        if( root->child[index]==NULL )  return 0;
        root=root->child[index];
    }
    return root->cnt;
}

int main()
{
    ll i,j,k,m,n,query;

    tri *root=new tri(); //initialization

    cin>>n;
    fr(i,n)
    {
        scanf("%s",s);
        ll len=strlen(s);
        for(ll j=0; j<len; j++)
        {
            insert_string(root, s, j, i);
        }
    }

    cin>>query;

    while(query--)
    {
        cin>>s1;
        cout<<search_string(root, s1)<<endl;
    }
}


