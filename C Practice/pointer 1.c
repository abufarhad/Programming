#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("value of p is =%d\n",++*p);
    printf("address of p is=%x",p);
    return 0;
}

