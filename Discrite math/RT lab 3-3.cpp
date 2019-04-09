#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,k,n,m,cnt=0;
cin>>n; int a[n];
for(i=0;i<n;i++){ cin>>a[i];}
printf("Enter the number you want to find \n");
cin>>m;
for(i=0;i<n;i++){
if(a[i]!=m){ cnt++;}
else break;   }
cout<<"Position of the number"<<cnt+1;
 //cout<<a[n-1];
return 0;}


