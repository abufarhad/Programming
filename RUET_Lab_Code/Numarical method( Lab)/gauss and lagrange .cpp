#include<iostream>
using namespace std;
int main(){
    float x[10]= {6.1,6.2,6.3,6.4,6.5,6.6,6.7},y[10]= {226.981,238.328,250.047,262.144,274.625,287.496,300.763};
    float d1[10],d2[10],res,d3[10],p,h,d4[10],x1,x0;
    int i=0,j=0,n=6;
    cout<<"Enter the value:";
    cin>>x1;
    h=(x[j+1]-x[j]);
    x0=x[(j+n)/2];
    p=(x1-x0)/h;
    for(i=0; i<n; i++)  {
        d1[i]=y[i+1]-y[i];
        d1[i+1]=y[i+2]-y[i+1];
        d2[i]=d1[i+1]-d1[i];  }
    for(i=0; i<n; i++){
        d3[i]=d2[i+1]-d2[i];
        d3[i+1]=d2[i+2]-d2[i+1];
        d4[i]=d3[i+1]-d3[i];  }
    res=y[3]+p*d1[3]+p*(p-1)*d2[2]*.5+p*(p+1)*(p-1)*d3[2]*(1/6);
    cout<<"Result="<<res<<endl;}
