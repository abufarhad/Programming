#include<stdio.h>
int fact(int EVEN,int ODD)
{
    int n,result,i;
    if(n%2==0)
    return 0;
    if (n%2==1)
    return 1;
}
int main()
{
    int n,E,O;
    printf("Enter the value of n :");
    scanf("%d",&n);
    if(n%2==0)
    printf("%d is even\n",n,fact(E,O));
    //if(n%2==1)
    else
    printf("%d is odd\n",n,fact(E,O));
}
