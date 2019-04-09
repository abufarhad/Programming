#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    int i,j,k,l,x,n; int a[100],t=0;
   // cin>>n;
    //while(n--){
    cin>>l;
    for(i=0;i<l;i++)   {    cin>>a[i];  }
    sort(a,a+l);
//  for(i=0;i<l;i++){
//        for(j=i+1;j<l;j++){
//            if(a[i]>a[j]){
//            t=a[i];
//            a[i]=a[j];
//            a[j]=t;}}}

      for(i=0;i<l;i++){
   //cout<<a[i]<<" ";}}
  printf("%d ",a[i]);}
     return 0;
}

