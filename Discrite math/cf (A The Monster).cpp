#include<bits/stdc++.h>
using namespace std;
int main(){
   long long  n,i=0,j,m[100000],k[100000],a,b,c,d;
   cin>>a>>b>>c>>d;
//if((a%2==0&&b%2==0||a%2==1&&b%2==1)&&((c%2==0&&d%2==0)||(c%2==1&&d%2==1))&&a){
//if(b!=1&&d!=1){
   for(i=0;i<200;i++){
        m[i]=b+i*a;
        k[i]=d+i*c;
        //cout<<m[i]<<" "<<k[i]<<endl;
   }
    for(i=0;i<200;i++){
    for(j=0;j<200;j++){
        if(m[i]==k[j]){ cout<<m[i]; break;}
        //else cout<<"-1" ; break;
    }  if(m[i]==k[j]){ break;} else cout<<"-1"; break;
} }
//else cout<<"-1";}






