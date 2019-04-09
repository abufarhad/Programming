#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define fr(i,n)             for (ll i=0;i<n;i++)

map<string, ll>mp;
void addnode(string s)
{
    fr(i,s.size())
    {
        string s2=s.substr(0,i+1 );
        if(mp.find(s2) !=mp.end() ) mp[s2]+=1;
        else  mp[s2]=1;
    }
}

ll findnode( string s1)
{
     if(mp.find(s1) !=mp.end() )
     {
         map<string , ll> ::iterator it=mp.find(s1);
         return it->second;
     }
     else return 0;
}

int main()
{
    ll n;
    cin>>n;
    string a,b;

    while(n--)
    {
        cin>>a>>b;
        if(a=="add") addnode(b );
        else  cout<<findnode(b)<<endl;
    }
}
