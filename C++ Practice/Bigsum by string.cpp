#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long


string add(string a, string b)
{
    string c,d;
    if(a.size()<b.size())
        swap(a,b);

    ll gap=a.size()-b.size();

    while(gap)
    {
        c+='0';
        gap--;
    }
    c+=b;       /// if a=122, b=12 then firstly gap=1 and c=0. And now c=012, a=122;

    ll len=a.size(), carry=0;
    for(ll i=len-1; i>=0; i--)
    {
        ll x=(a[i]-'0')+(c[i]-'0');
        x+=carry;
        carry=x/10;
        x%=10;
        d+=(x+'0');    ///converted to string
    }
    if(carry)
        d+=49;

    reverse(d.begin(), d.end());
    return d;
}
int main()
{
    ll  i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    string s,s1;
    while(cin>>s>>s1)
        cout<<add(s,s1)<<endl;
    return 0;
}




