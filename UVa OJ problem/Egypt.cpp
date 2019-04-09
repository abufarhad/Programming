#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,t,i,a1,a2,a3;
while(1){
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0) break;

        a1=a*a+b*b;
        a2=b*b+c*c;
        a3=c*c+a*a;

        if(a1==c*c || a2==a*a || a3==b*b){

    printf("right\n"); }
else   printf("wrong\n");
}
return 0;
}




