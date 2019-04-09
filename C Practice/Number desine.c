#include<stdio.h>
int main()
{
    int i,j,n,rows;
    printf("Enter the rows number: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
