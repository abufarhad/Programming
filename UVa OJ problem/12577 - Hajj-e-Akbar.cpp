#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long

int main()
{
    ll x;
    string s,s1;
    for(x=1;; x++)
    {
        cin>>s;
        if(s=="*") return 0;
        else if(s=="Hajj")
        {
            printf("Case %lld: Hajj-e-Akbar\n",x);
        }
        else if(s=="Umrah")
        {
            printf("Case %lld: Hajj-e-Asghar\n",x);
        }
    }
}
