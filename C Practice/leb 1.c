//Write a program to find velocity.

#include<stdio.h>
int main()
{
    int a,V,u,t;
    printf("Enter primary velocity,accletion &time  :\n");
    scanf("%d %d %d",&u,&a,&t);
    V=u+(a*t);
    printf("The  valu of Velocity is= %d",V);
    return 0;

}
