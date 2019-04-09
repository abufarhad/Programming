#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
double a[30],b[30],c[30],p;
int i,j,n,m;
 cout<<"Enter no. of Co-efficient: ";
 cin>>m;
for(i=1;i<=m;i++)
{
    cin>>a[i];
}
 b[1]=1.0;
 n=1;
 p=0.0;
while(n<=15)
{
  i=1;
  j=n;
  while(i<=n && j>=1)
  {
    p+=a[i]*b[j];
    i++;
    j--;
  }
  b[n+1]=p;
  n++;
  p=0.0;
}
for(i=1;i<=9;i++)
{
  c[i]=b[i]/b[i+1];
  cout<<"\nc["<<i<<"] : "<<c[i];
}
//for(i=1;i<=9;i++)
  //{
  //if((c[i+1]-c[i])<=0.0001)
 // {
      printf("\n the smallest root is :%d",c[9]);
  //cout<<"\nThe smallest root is: "<<c[9];
  //break;
  //}
//}
return 0;
}
