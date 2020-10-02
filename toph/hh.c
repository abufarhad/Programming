#include<stdio.h>
int main()
{
    int i , j , k;
    int a[20][20];
    int r, c;

    printf("Enter row and column\n");
    scanf("%d%d" , &r, &c);

    printf("Enter The Matrix\n");
    for(i=0; i<r ; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }

    int p , q;
    printf("Enter the position\n");
    scanf("%d%d", &p, &q);

    printf("Your Output is here - \n");
    printf("%d\n" , a[p][q]);
}

