//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
int main()
{
    ll m,n,i,j,k,t;
    cin>>t;
    while(t--)
    {
        ll ans=0,i=0;
        cin>>n;
        ll squ=sqrt(n);
        while(squ>0)
        {
            if(squ*squ+i*i == n)  { ans=1; break; }
            else if(squ*squ > n)  break;
            else if(squ*squ +i*i < n) i++;
            else  squ--;
        }
        if(ans)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

