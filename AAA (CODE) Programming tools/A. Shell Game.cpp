#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    int hole,arr[3]={0,1,2};
    cin>>hole;
    ll rim=n%6;

    for(int i=1;i<=rim;i++){
        if(i%2==1)
            swap(arr[0],arr[1]);
        else
            swap(arr[1],arr[2]);
    }
    cout<<arr[hole]<<endl;
    return 0;
}
