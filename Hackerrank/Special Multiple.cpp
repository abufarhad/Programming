#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

ll convert_binary(ll n)
{
    if(n==1)return 1;
    if(n%2==0) return 10*convert_binary(n/2);
    else return 10*convert_binary(n/2) +1 ;
}


int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
    ll m,i,j,k, a=1, b=9;
    cin>>m;
    while(b%m !=0 )
    {
        a++;
        b=convert_binary(a);
        b*=9;
    }
    cout<<b<<endl;
    }
}
