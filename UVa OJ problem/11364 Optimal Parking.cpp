#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,j,k,a[100],d,e; int cnt=0;
   cin>>k;
   while(k--){
        cnt=0;
    cin>>j;
    for(i=0;i<j;i++){
        cin>>a[i];  cnt++;} // cout<<cnt<<" ";
        sort(a,a+j);
        for(i=0;i<j;i++){
     //cout<<a[cnt-1]; break;}
     d=a[cnt-1]-a[0];}
     e=d*2; cout<<e<<endl;

   }
    return 0;
}

