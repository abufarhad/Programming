#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,i,arr[200008];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);

    ll dif;
    dif=arr[n-1]-arr[0];
    ll frwrd=1,bkwrd=1;
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
            frwrd++;
        else
            break;
    }
    ll kount;


    if(arr[0]==arr[n-1]){
            n--;
            kount=(n*(n+1))/2;

         cout<<dif<<" "<<kount<<endl;
         return 0;
    }

    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==arr[i-1])
            bkwrd++;
        else
            break;
    }
    ll res=frwrd*bkwrd;
    cout<<dif<<" "<<res<<endl;
}
