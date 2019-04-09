#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a[100],i,cnt=0;
cin>>n;
while(n--){
        cnt=0;
for(i=0;i<3;i++){
    cin>>a[i];
    if(a[i]>=0||a[i]<=0){ cnt++;}
}
cout<<cnt<<endl;}
   return 0;
}




