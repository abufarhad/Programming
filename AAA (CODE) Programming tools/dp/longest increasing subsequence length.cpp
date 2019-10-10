#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,arr[100];

    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];

    int t[100];
    for(i=0;i<n;i++)
        t[i]=1;

    for(i=1;i<n;i++){
        for(j=0;j<i;j++)
        {
            if(arr[j]<arr[i])
                t[i]=max(t[i],t[j]+1);
        }
    }
    for(i=0;i<n;i++)
        cout<<t[i]<<" ";

    sort(t,t+n);
    cout<<"the length of the longest subsequence lenght is "<<t[n-1]<<endl;
    return 0;
}
