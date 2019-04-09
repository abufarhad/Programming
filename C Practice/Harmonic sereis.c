//Write a program to disply  harmonic series.

#include<stdio.h>
int main()
{
    int n;
    float i,sum,t;
    printf("1+1/2+1/3+........+1/n\n");
    printf("Enter the value of n\n");
    scanf("%d",&n);sum=0;
  for(i=1;i<=n;i++)
    {
      t=1/i;
      sum=sum+t;
    }
    printf("%f",sum);
    return 0;
}

