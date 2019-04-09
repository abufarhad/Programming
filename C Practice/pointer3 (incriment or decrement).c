#include<stdio.h>
int main()
{
    int x,y,*p,v[5]={1,3,5,6,7};
    p=v;
    //x=*++p;
    //printf("%d\n",x);
    y=++(*p);
    printf("%d",y);
    return 0;
}
