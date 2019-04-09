#include<bits/stdc++.h>
using namespace std;
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int power,coef[100],i=0;
    printf("highest power:\n");
    scanf("%d",&power);
    for(i=power; i>=0; i--)
    {
        printf("x^%d:\n",i);
        scanf("%d",&coef[i]);
    }
    for(i=power; i>=0; i--)
    {
        if(coef[i]>=0 && i!=power)
            printf("+");
        printf("%d",coef[i]);
        if(i!=0)      printf("x^%d",i);
    }
    float tmp=0;
    float x1=0,x0;
    printf("\nenter x0:");
    scanf("%f",&x0);
    while(1)
    {
        float fx=0;
        for(i=power; i>=1; i--)
        {
            fx=fx+coef[i]*(llround(pow(x0,i)));
        }
        fx=fx+coef[0];
        float dx=0;
        for(i=power; i>=0; i--)
        {
            dx=dx+coef[i]*(i*llround(pow(x0,(i-1))));
        }
        tmp=x1;
        x1=x0-(fx/dx);
        x0=x1;
        if(fabs(tmp-x0)<0.00001);
        break;
    }
    printf("root:%f",x0);
}
