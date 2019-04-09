#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&k);
    for(i=k;i>0;i--)
    {
        for(j=0;j<k-i;j++)
            printf(" ");
        for(j=0;j<i;j++)
            printf(" *");
        printf("\n");

    }
    return 0;
}
