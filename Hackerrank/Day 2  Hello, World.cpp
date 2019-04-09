#include<bits/stdc++.h>
using namespace std;
int main() {
   int i,j;
   double a,b,c,d,m;
   cin>>a>>i>>j;
   m= a+(a*((i)/100.0))+(a*((j)/100.0));
     //m= a+(a*(double(i)/100.0))+(a*(double(j)/100.0));
  // cout<<d<<endl;
  // cout<<m<<endl;
   if(m-int(m)>0.5)  { m=m+0.5;
   cout<<"The total meal cost is "<< int(m)<<" dollars."<<endl;}
   else
   cout<<"The total meal cost is "<<int (m)<<" dollars."<<endl;
return 0;
}
