#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
using namespace std;
#define ll long long
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

ll i,j,k,m,n,query,last,cur,sz;
string s,s1;
vector<string>v;
vector<string>::iterator it ;

struct tri
{
    ll child[27];
    ll cnt;
}nd[20100];

void new_tri(ll cur)
{
    fr(i, 26)nd[cur].child[i]=-1;
    nd[cur].cnt=1;
}

void insert_string( )
{
   cur=0, sz=s.size();
   fr(i,sz)
   {
       ll idx=s[i]-'a';
       if(nd[cur].child[idx]==-1 )
       {
           nd[cur].child[idx]=last;
           //cout<<" last= "<<nd[cur].child[idx]<<endl;
           new_tri(last++);
           cur=nd[cur].child[idx];
           // cout<<"if  cur= "<<cur<<endl;
       }
       else
       {
           cur=nd[cur].child[idx];
           //cout<<"else  cur= "<<cur<<endl;
           nd[cur].cnt++;
       }
   }
}

void find_string( )
{
    sz=s.size(), cur=0;
    fr(i,sz)
    {
        ll idx=s[i]-'a';
        cout<<s[i];
        cur=nd[cur].child[idx];
        if(nd[cur].cnt==1 )i=sz;
    }
}

int main()
{
    new_tri(0);
    last=1;
    while( getline(cin, s))
    {
        if(s.size()==0) break;
        v.pb(s);
        insert_string( );
    }

    for(it=v.begin(); it<v.end();it++ )
    {
        s=*it;
        cout<<s<<" ";
        find_string( );
        cout<<endl;
    }
}
