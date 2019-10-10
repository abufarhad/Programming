#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll i,n,arr[100000];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>arr[i];
    for(i=2;i<=n;i++)
        arr[i]=arr[i]+arr[i-1];
    ll num,rd;
    cin>>rd;
    ll start,endd,mid,ans;


    for(i=0;i<rd;i++){
        cin>>num;
        start=0;
        endd=n;

        while(start<=endd){
            mid=(start+endd)/2;
            if(num<=arr[mid]){
                ans=mid;endd=mid-1;
            }
            else
                start=mid+1;
    }
    cout<<ans<<endl;
    }
//    for(i=1;i<=n;i++)
//        cout<<arr[i]<<" ";

    return 0;
}
