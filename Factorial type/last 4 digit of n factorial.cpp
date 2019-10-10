//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
ll f[21];
void fact( )
{
    f[0]=f[1]=1;
    for(ll i=2;i<=20;i++ ) f[i]= i*f[i-1];
  //  fr(i,20)cout<<f[i]<<" ";
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    cin>>q;
    while(q--){
    string s,s1;

      ll cnt=0,ans=0;
      scl(n);
      fact();
      if(n>20) printf("0000\n");
      else
      {
          s=to_string(f[n]); /// or mod with 10000 or 1000 or 100 or 10
          //reverse( s.begin(), s.end());
          //cout<<s<<endl;
          if(s.size()<4){ x=4-s.size(); fr(i,x)cout<<0; cout<<s<<endl; }
          else
          {
              for(i=s.size()-1;i>=0;i--){ cnt++, s1+=s[i]; if(cnt==4) break; }
             reverse( s1.begin(), s1.end());
             cout<<s1<<endl;
          }

      }
    }

return 0;
}




