#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,cnt=0,k,n,a[10];  cin>>k;

    for(i=0;i<k;i++){
     //cin>>n;
    //int arr[n];
    for(int i=0;i<3;i++)
    cin>>a[i];
    sort(a,a+3);
    cout<<"Case "<<i+1<<": "<<a[1]<<endl;}

    return 0;
}

