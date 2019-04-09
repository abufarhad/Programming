#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n; int t[n],i,b=0,a=0;

for(i=0;i<n;i++)
    cin>>t[i];
int cnt=0,cn=n-1;
 //cout<<a[n-1]<<endl;
while(cn-cnt>=0){
if(a<=b)
    a=a+t[cnt++];
else b=b+t[cn--];}
     cout<<cnt<<" "<<n-cnt<<endl;

   return 0;
}
