#include<bits/stdc++.h>
using namespace std;

int main(){
int t,i ;
double  t1,t2,p,d,v,u;
cin>>t;
for( i=1;i<=t;i++){

cin>>d>>v>>u;
if(v>=u||u==0||v==0)  { printf("Case %d: can't determine\n",i);  continue; }

t1= d/u; cout<<t1<<endl;
t2=d/( sqrt(u*u-v*v)); cout<<t2<<endl;

p=t2-t1;

 printf("Case %d: %.3lf\n",i, fabs(p)) ; }

return 0;
}



