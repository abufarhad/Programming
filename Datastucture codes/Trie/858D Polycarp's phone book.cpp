#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
using namespace std;
#define ll long long
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

struct tri
{
    tri *child[10];
    ll cnt,idx;
    tri()
    {
        fr(i,10)child[i]=NULL;
        cnt=0;
        idx=-1;
    }
};

void insert_string(tri *root,  string s, ll id)
{
    ll sz=s.size();
    bool flag=0;
    fr(i,sz)
    {
        ll j=s[i]-'0';
        if(!root->child[j] )  root->child[j]=new tri();
        root=root->child[j];

        if(root->idx !=id ) flag=1, root->idx=id;
        if(flag) root->cnt++;
    }
}

bool Search(tri *root, string s)
{
    fr(i,s.size())
    {
        ll id=s[i]-'0';
        root=root->child[id];
        if(root->cnt==1 )
            return 1;
    }
    return 0;
}

int main()
{
    tri *root=new tri();
    ll i,j,k,m,n,t;

    cin>>t;
    string s[t+2],s1,tmp,mn;

    fr(i,t)
    {
        cin>>s[i];
        fr(j, s[i].size())
        {
            tmp="";
            for(k=j; k<s[i].size(); k++)
            {
                tmp+=s[i][k];
                insert_string(root, tmp, i );
            }
        }
    }

    fr(i,t )
    {
        mn="9999999999";
        fr(j,s[i].size())
        {
            tmp="";
            for(k=j; k<s[i].size(); k++)
            {
                tmp+=s[i][k];
                if(Search(root, tmp) && tmp.size()<mn.size()  ) mn=tmp;
            }
        }
        cout<<mn<<endl;
    }
}
