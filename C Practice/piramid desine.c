//Write a program to disply piramid shape.

#include<stdio.h>
int main()
{
    int row,space,i,j;
    printf("Enter the number of row");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
    for(j=1;j<=row-i;j++)
    printf(" ");
    for(j=1;j<=i;j++)
    printf(" +");
    printf(" \n");}
    return 0;
}


