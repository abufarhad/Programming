#include<bits/stdc++.h>
using namespace std;

int arr[1000];
int main()
{

  int i,j;arr[1000];

  int p=0,n,k,kount=0;
  cin>>n>>k;

  for(i=0;i<n;i++)
    cin>>arr[i];


   while(1){
        for(i=0;i<n;i++){
            if(arr[i]==k)
                p++;
        }
    if(p==n)
        break;

    for(j=0;j<n;j++){
        if(arr[j]==k)
            continue;
        if(arr[j]!=arr[j+1])
            arr[j]=arr[j]+1;
    }
    //cout<<"j"<<endl;
    kount++;p=0;
//     for(i=0;i<n;i++)
//    cout<<arr[i]<<" ";
//    cout<<endl;
  }
  cout<<kount<<endl;

    return 0;
}
