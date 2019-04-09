#include<stdio.h>
int fun(int n);
int main()
{
    int n=3;
       // for(i=0;i<=5;i++){
       // n=fun(a);
    printf("%d  \n",fun(n));
}
int fun(int n)
{
    //int d,n;
    //scanf("%d",&y);
    //d=x*x;
if(n>0)
    //return 1;
        return (n+fun(n-1));
}
