#include<stdio.h>
int main()
{
    int i,m,n,temp;
    scanf("%d  %d",&m,&n);
    if(m>n)
    {
        temp=m;
        m=n;
        n=temp;
    }
    for(i=m;i<=n;i++)
        printf("%d\n",i);
    return 0;
}
