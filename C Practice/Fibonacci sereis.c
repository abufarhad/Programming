#include<stdio.h>
int main()
{
    int t1=0,t2=1,n,dis=0,cnt=0;
    printf("enter a integer");
    scanf("%d",&n);
    printf("%d+%d+",t1,t2);
    dis=t1+t2;
    while(dis<n)
    {
        printf("%d+",dis);
        t1=t2;
        t2=dis;
        dis=t1+t2; cnt++;
    }
    printf("\n%d",cnt+1);
    return 0;
}

