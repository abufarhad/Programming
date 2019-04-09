#include<bits/stdc++.h>
using namespace std;
int main(){

int   n,i,j,k,d,v=1 ,x,dx,dy,fx,fy,y;
cout<<"Enter a odd number "<<endl;
cin>>n;
if(n%2==0) return 0;
int a[n+1][n+1];

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            a[i][j]=0; }}

 x=0, d=(n/2);
a[x][d]=v;

    while(1){
      v++;
      fx=x-1; fy=d-1;
      dx=x+1; dy=d;
      if(fx<0) fx=n-1;
      if(fy<0) fy=n-1;
      if(dx>=n) dx=0;
      if(a[fx][fy] && a[dx][dy]){
        break;
      }
      if(a[fx][fy]) {
        a[dx][dy]=v;
        x=dx; d=dy;
      }
       if(! a[fx][fy]) {
        a[fx][fy]=v;
        x=fx; d=fy;
      }
    }

cout<<endl<<"Output of calculate Magic square - "<<endl<<endl;
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            cout<<a[i][j]<<"   ";
}cout<<endl;}
return 0;
}

