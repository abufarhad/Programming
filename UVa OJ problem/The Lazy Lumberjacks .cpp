#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,t,i,a1,a2,a3;
cin>>t;
for(i=1;i<=t;i++){
        cin>>a>>b>>c;
a1=a+b;
a2=b+c;
a3=a+c;

if(a1>c&&a2>a&&a3>b){
    printf("OK\n",i);
}
else   printf("Wrong!!\n",i);
}
return 0;
}



