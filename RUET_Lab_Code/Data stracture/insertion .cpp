#include<iostream>
using namespace std;
int main(){
    int n,a[100],i,d,t,cnt=0;
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=1;i<n;i++){
//    d=i;
   // while(d>0 && a[d]<a[d-1]){
    while(i>0 && a[i]<a[i-1]){
        t=a[i];
        a[i]=a[i-1];
        a[i-1]=t;
        i--;
        cnt++;
    }
}
for(i=0;i<n;i++){
        cout<<a[i]<<" ";}

cout<<cnt;
return 0;
}
