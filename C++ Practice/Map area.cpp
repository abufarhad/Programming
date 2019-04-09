#include<bits/stdc++.h>
using namespace std;

int main(){
double l, area1, area2,r,r1;
int t, i;
cin>>t;
for(i=1;i<=t;i++){
cin>>l;
r=l*.2;    //cout<<r;
r1=l*(.6);
area1= acos(-1)*r*r;   //cout<<area1<<endl;
area2= r1*l - area1;   //cout<<area2<<endl;
printf("%.2lf %.2lf\n",area1,area2);
}
return 0; }
