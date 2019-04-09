#include<stdio.h>
int fn(int a)
{
    if(a==1||a==0)
        return 1;
    if(a%2==0)
        return fn((a/2)+2);
    else
        return fn(a-1)+3;
}
 int main()
{
    printf("%d\n",fn(7));
}
