#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
int main()
{
    ll i,n,m,d,len,j;
    char s[105];
    while(cin>>n)
    {
        if(n==0) return 0;
        cin>>s;
        len=strlen(s);
        d=len/n;
        for(i=0;i<len;i+=d){
            for(j=i+d-1;j>=i;j--)
            {
                cout<<s[j];
            }}

            cout<<endl;
           // puts("");
    }
}
