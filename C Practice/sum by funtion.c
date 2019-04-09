//Write a program add two number by using funtion.
#include<stdio.h>
int add(int a,int b){
   int sum=a+b;
   return sum;}
int main()
{
    int a,b,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    //printf("Enter the value of a &b  :");
    scanf("%d %d",&a,&b);
    printf("Case %d: %d\n",i,add(a,b));}
    //printf("The value of this sum is %d",add(a,b));
}
