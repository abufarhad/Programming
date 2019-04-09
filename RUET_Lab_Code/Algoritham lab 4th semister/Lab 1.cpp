#include<bits/stdc++.h>
using namespace std;
int main(){

int   n,i,j,k,d,v=1 ,x,dx,dy,fx,fy,y;
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
//      if(a[fx][fy]) {
//        a[dx][dy]=v;
//        x=dx; d=dy;
//      }
       if(! a[fx][fy]) {
        a[fx][fy]=v;
        x=fx; d=fy;
      }
    }

    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
}cout<<endl;}
return 0;
}

//for(i=1;i<=m;i++){
//    for(j=1;j<=n;j++){
//        for(k=1;k<=(m*n);k++){
//            d=(((m+n)/2)+1);
//            a[m][d]=sum+1;
//            f=m-1; g=n-1;
//            s=sum;
//            if(f==0&&g!=0){ f=m; g=n-1; } a[f][g]=s+1;
//
//            h=s;
//            e=f-1; r=g-1;
//            if(e!=0&&r==0){  e=n; r=g-1; } a[e][r]=h+1; }
//        }
//    }
//
