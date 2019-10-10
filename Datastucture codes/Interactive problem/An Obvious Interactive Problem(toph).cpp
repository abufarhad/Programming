#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll m,i,n;
    ll l=0, r=1000000;
    while(l!=r)
    {
        ll m=(l+r)>>1;
        cout<<m<<endl;

        char  s[5];
        scanf("%s", s);

        if(strcmp(s, ">=" )==0 )l=m;
        else if(strcmp(s, "<" )==0 )r=m;
        else {cout<<"! "<<m<<endl; break;}
    }
}
