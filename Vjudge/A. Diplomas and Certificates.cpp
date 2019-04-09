#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
int main()
{
    ll i,j,m,n,f,s,need,sum=0;
    cin>>n>>s;
    m=n/(2*(s+1));
    cout<<m<<" "<<m*s<<" "<<(n-m-(m*s))<<endl;
    return 0;
}
