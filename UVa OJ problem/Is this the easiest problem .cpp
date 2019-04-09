#include<bits/stdc++.h>
using namespace std;

int main(){
long long  a,b,c,t,i,a1,a2,a3;
cin>>t;
for(i=1;i<=t;i++){
        cin>>a>>b>>c;
a1=a+b;
a2=b+c;
a3=a+c;

if(a1>c&&a2>a&&a3>b){
    if(a1==a2&&a2==a3&&a1==a3){ printf("Case %ld: Equilateral\n",i);   }
    else if(a1==a2||a1==a3||a2==a3){  printf("Case %ld: Isosceles\n",i) ; }
    else if(a1!=a2&&a2!=a3&&a1!=a3)  { printf("Case %ld: Scalene\n",i) ; } }
    else  { printf("Case %ld: Invalid\n",i) ; }
}
return 0;
}


