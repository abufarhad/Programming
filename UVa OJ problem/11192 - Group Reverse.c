#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
int main()
{
    ll i,n,m;
    string s;
    while(cin>>n)
    {
        if(n==0) return 0;
        cin>>s;
        len=s.size();
        d=len/n;
        for(i=0;i<len;i+=d)
        {
            for(j=i+len-1;j>=i;j--)
            {
                putchar(s[i]);
            }
        }
    }
}
