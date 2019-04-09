#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum=0,n,a;
    printf("Enter the value  of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //if(i%2==0){
        //a=pow(i,2);
            sum=sum+i*i;}
    //}
    printf("The value is %d",sum);
    return 0;
}
