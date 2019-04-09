#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 10^9
int main(){
 ll i,m,n,b,t;
 cin>>t;
 while(t--){ ll d=1;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){  cin>>m;
    d=(((d % (1000000007) )* (m % (1000000007))) % (1000000007));
    //d= (d*a[i])%1000000009;
     }
    cout<<d<<endl;
 }
}
