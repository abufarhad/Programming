#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll arr[100000],i,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    ll start=0,en=0,ini=0;
    for(i=0;i<(n-1);i++){
        if(arr[i]>arr[i+1]){
            ini=i;
            break;
        }
    }

    for(i=ini;i<n-1;i++){
        if(arr[i]>arr[i+1])
            en=i+1;
        else{
            en=i;
            break;
        }
    }

    cout<<ini<<" "<<en<<endl;

    sort(arr+ini,arr+en+1);
    int flag=0;
    for(i=0;i<(n-1);i++){
        if(arr[i]>arr[i+1]){
            flag=1;
        }
    }
    if(flag==1)
        cout<<"no"<<endl;
    else
        cout<<"yes\n"<<ini+1<<" "<<en+1<<endl;


    return 0;
}
