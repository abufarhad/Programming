#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{

int m,n,i,d;
printf("child within a child \n");
for(i=1;i<=10;i++)
{
    printf("%d ",i);
}
}
