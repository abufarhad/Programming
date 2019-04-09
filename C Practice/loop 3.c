#include<stdio.h>
int main()
{
    int i,j,a,b;
    for(i=1;i<=3;i++)
    {
        scanf("%d  %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            printf("%d  ",j);
        }
    }


    return 0;
}


