#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=11;i++)
    {
        for(j=1;j<11;j++)
        {
            printf("");
        }
        for(k=1;k<(i*2);k++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    for(i=10;i>=1;i--)
    {
        for(j=11;j>i;j--)
        {
            printf("");
        }
        for(k=1;k<(i*2);k++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}

