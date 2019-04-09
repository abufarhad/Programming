#include<stdio.h>
int main()
{
    int i,j,k,x,y,lcm,f;
    scanf("%d %d",&i,&j);
    x=i;
    y=j;
    while(x!=y)
    {
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }
    f=i;
    lcm=x*y/f;
    printf("LCM=%d",lcm);
    return 0;
}
