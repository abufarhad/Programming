#include<bits/stdc++.h>
#include<math.h>
int getTotalDigits(int);
int isArmStrong(int,int);

int getTotalDigits(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}

int isArmStrong(int count, int n)
{
    int temp=n;
    int sum=0;

    while(n>0)
    {
        sum=sum+pow(n%10,count);
        n=n/10;
    }
    if(temp==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int count = getTotalDigits(n);

    int a=isArmStrong(count, n);
    if(a==1)
    {
        printf("%d is armstrong number\n",n);
    }
    else
    {
        printf("%d is not armstrong number\n",n);
    }
    return 0;
}
