#include<stdio.h>
int main(){
int i,j,k,n,l,h,f,res;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    if((0<k&&k<100)&&(0<h&&h<100)&&(0<f&&f<100)){
    scanf("%d%d%d",&k,&h,&f);}
   else
        break;
    res=k*h*f;
printf("%d",res);}
return 0;
}


