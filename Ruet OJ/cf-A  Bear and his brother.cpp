#include<bits/stdc++.h>
using namespace std;
 int main(){
     long long int a,b,c,i,d,cnt=0;
     cin>>a>>b;
  for(i=0;i<100;i++){
     c=a*3;
     d=b*2;
     if(c<=d)  a=c; b=d;
     cnt++;         //cout<<c<< " "<<d<<endl;
     if(c>d)break;
  }
     cout<<cnt;
 return 0;
 }
