#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,z,i,j,k,d;
cin>>z;

for(i=0;i<z;i++){
    for(j=z;j>=0;j--){
       d= i*i+j*j;
       //printf("%d\n",d);
    if(d==z*z){ printf("(X,Y) = (%d %d)\n",i,j); break;}
       //else printf("Not possible"); break;
    }}

return 0;
}
