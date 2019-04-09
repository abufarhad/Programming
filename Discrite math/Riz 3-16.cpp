#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n,a,b,i,j,k=0;
printf("Enter a number less then 40 for cheaking prime \n");
cin>>n;
b= n*n-n+41;
 cout<<"The value of f(n) is : "<<b<<endl;

for(j=2;j<=b/2;j++){
    if(b%j==0){
   k=1; break;}}

    if(k==0&&b!=1)  cout<<"Yes f(n) value is  prime";
    else cout<<"No";
    return 0;
}



