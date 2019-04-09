#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,s;
    printf("Enter No of data:\n");
    scanf("%d",&s);
    float x[s],y[s][s];
    printf("Enter the value of X and Y:\n");
    for(i=0;i<s;i++)
        scanf("%f %f",&x[i],&y[0][i]);
    for(i=1;i<s;i++)
    {
        for(j=0;j<s-i;j++)
            y[i][j]=y[i-1][j+1]-y[i-1][j];
    }
    /*for(i=1;i<s;i++)
    {
        for(j=0;j<s-i;j++)
            printf("%f ",y[i][j]);
        printf("\n");
    }*/
    float p,h,res=0,g;
    h=x[1]-x[0];
    printf("Enter the value of x");
    scanf("%f",&p);
    p=(p-x[0])/h;
    for(i=0;i<s;i++)
    {
        if(i==0) g=1;
        else g*=((p-i+1)/i);
        res+=y[i][0]*g;
    }
    printf("Result = %d\n",(int)res);
}

