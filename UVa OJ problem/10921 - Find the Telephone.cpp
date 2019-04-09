#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long
int main()
{
    ll x,len,i;
    string s,s1;
    while( cin>>s)
    {
        len=s.size();
        for(i=0; i<len; i++)
        {
            if('A'<=s[i] && s[i]<='C') cout<<2;
            if('D'<=s[i] && s[i]<='F') cout<<3;
            if('G'<=s[i] && s[i]<='I') cout<<4;
            if('J'<=s[i] && s[i]<='L') cout<<5;
            if('M'<=s[i] && s[i]<='O') cout<<6;
            if('P'<=s[i] && s[i]<='S') cout<<7;
            if('T'<=s[i] && s[i]<='V') cout<<8;
            if('W'<=s[i] && s[i]<='Z') cout<<9;
            if ( s[i]=='1' || s[i]=='0'|| s[i]=='-')  cout<<s[i];
        }
        cout<<endl;
    }
}
