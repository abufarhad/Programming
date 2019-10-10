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
        energy=energy+tem;
        if(energy<0){
            cost=cost+abs(energy);
            energy=0;
        }
        //cout<<"tem "<<tem<<"   ene "<<energy<<" cost"<<cost<<endl;
    }
    cout<<cost<<endl;

    return 0;
}
