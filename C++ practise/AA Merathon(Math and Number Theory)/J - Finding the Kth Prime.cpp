#include<bits/stdc++.h>

using namespace std;
long long int j,k,h,s,p,t,q,z;
bool  r[100000000];
long long int m[100000000];


int main(){
   long long  int i,y=2, n;

m[1]=2;//cout<<"ghlkk\n";
for(i=4;i<100000000;i+=2){
  r[i]=true;  }
for(i=3;i<100000000;i+=2){
if(r[i]==false){
        m[y++]=i;

    for(t=i*i;t<100000000;t+=i+i){
      r[t]=true;   }}
}
for(j=2000;j<100000000;j+=2){

   if(r[j]==false){m[y++]=j;  } }

//cout<<y<<endl;
//f
//()
//cout<<y<<endl;
long long int v;

//for(j=0;j<100;j++){cout<<ami[j]<<endl;}

long long int d,k,h;

scanf("%lld",&d);
          for(k=0;k<d;k++){
                 scanf("%lld",&n);
                 printf("%lld\n",m[n]);}}

//                   i=0;v=0;
//while(m[i]<=n/2){
//          p=n-m[i]; //cout<<"p= "<<p<<"  n= "<<n<<"  m[i] ="<<m[i]<<endl;
//if((r[p]==0)&&p>1){ v++;}
//i++;   }
//printf("Case %lld: %lld\n",k+1,v);} }




