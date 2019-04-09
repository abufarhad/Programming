#include<stdio.h>
int fact(int E,int O)
{
    int n,flag=0,i;
    for(i=2;i<=n/2;i++){
     if(n%i==0){
            flag=1;break;}
      }
    return 0;
}
int main()
{
    int n,E,O,flag;
    printf("Enter the value of n :");
    scanf("%d",&n);
    if(flag==0)
    printf("%d is prime",n,fact(E,O));
    else
    printf("%d is is not prime",n,fact(E,O));
}
