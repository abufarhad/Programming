#include<bits/stdc++.h>
using namespace std;

float f(float x){
return(pow(x,3)+x*x+x+7);}

int main(){
    float a,b,err=.0001,x,x1=0;
    int cnt=1;
    cout<<"Enter the value of a & b"<<endl;
    cin>>a>>b;
    if(f(a)*f(b)<0){ x=(a*f(b)-b*f(a)) /(f(b)-f(a));
    //cout<<"Iretation no : "<<cnt<<"a ="<<
    printf("No : %d   a=%.5f  b=%.5f  x=%.5f   f(x)=%.5f\n",cnt,a,b,x,f(x));
    cnt++;
    while(1){
        if(f(a)*f(b)<0){ b=x;} else a=x;
        x=(a*f(b)-b*f(a)) /(f(b)-f(a));
         printf("No : %d   a=%.5f  b=%.5f  x=%.5f   f(x)=%.5f\n",cnt,a,b,x,f(x));
  if(fabs(x1-x)<err){
  printf("After %d Iretation the value of root is %.5f",cnt,x); break;}
  x1=x;
  cnt++;
    }}
    else printf("Not satisfied");
    return 0;
}



