
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,arr[100009],i;
    cin>>n;
    arr[0]=0;
    for(i=1;i<=n;i++)
        cin>>arr[i];

    ll cost=0,energy=0,tem;

    for(i=0;i<n;i++){
        tem=arr[i]-arr[i+1];
        cost=cost+tem;

    }
    if(cost>=0)
        cost=0;
    else
        cost=abs(cost);
    cout<<cost<<endl;
    cout<<arr[99]<<endl;

    return 0;
}
