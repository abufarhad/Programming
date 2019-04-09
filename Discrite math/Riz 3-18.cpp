#include<bits/stdc++.h>
using namespace std;
int main(){
long long int j,n,m,k=0,d;
printf("Enter number for cheaking prime or not prime\n ");
cin>>n;
d=n*n+1;
 for(j=2;j<=d/2;j++){
    if(d%j==0){
   k=1; break;}}

    if(k==0&&d!=1)  cout<<"Yes prime ";
    else cout<<"Not prime ";
    return 0;}


