#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,d,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    int sum=0;
    scanf("%d %d",&a,&b);
    for(j=a;j<=b;j++)
        if((j%2)==1)
        sum=sum+j;
    printf("Case %d: %d\n",i,sum);

    }
    return 0;
}
