#include<stdio.h>
int main(){
int a=0,b=1,i,n,m,sum=0,j;
printf("Enter the value of n");
scanf("%d",&n);
printf("Please  enter the cheaking number :");
scanf("%d",&m);
printf("%d+ %d +",a,b);
for(i=2;i<n;i++)
{
    sum=a+b;
    a=b;
    b=sum;
    if(sum==m)
        j=1;
    printf("%d + ",sum);
}
if(j==1)
    printf("\n%d IT IS FEBONACCIE NUMBER",m);
else
    printf("\n%d IT IS NOT FEBONACCI NUMBER",m);

return 0;
}




