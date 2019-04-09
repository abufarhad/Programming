#include<stdio.h>
#include<conio.h>
void read_arr(int a[10][10],int r,int c)
{
    int i,j;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("Enter Element %d %d  ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void mul_arr(int m1[10][10],int m2[10][10],int m3[10][10],int r,int c)
{
    int j,i,k;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            for(k=1; k<=r; k++)
            {
                m3[i][j]=m3[i][j]+(m1[i][k]*m2[k][j]);
            }
        }
    }
}
void print_arr (int m[10][10],int r,int c)
{
    int i,j;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("%d",m[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m1[10][10],m2[10][10],m3[10][10],r,c;
//clrscr();
    printf("Enter the number of row");
    scanf("%d  ",&r);
    printf("Enter the number of coloumn");
    scanf("%d  ",&c);
    read_arr(m1,r,c);
    read_arr(m2,r,c);
    mul_arr(m1,m2,m3,r,c);

    print_arr(m3,r,c);
    getch();
}
