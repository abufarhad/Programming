
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl


#define N 100006

int main()
{

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    ll cnt=0,ans=0,sum=0;
    map<string , string>mp;
    string s, s1, st;

    while(1)
    {
    getline(cin, st);
    if(st[0]=='\0')break ;

    stringstream ss(st);

    ss>>s>>s1;
    mp[s1]=s;
    }

    while(cin>>s)
    {
    if(mp.find(s) ==mp.end() )cout<<"eh"<<endl;
    else cout<<mp[s]<<endl;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




