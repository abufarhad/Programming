#include<stdio.h>
int main()
{
    int i,j,N,M;
    scanf("%d%d",&N,&M);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=M;j++)
            printf("*");
            printf("\n");
    }
    return 0;
}
