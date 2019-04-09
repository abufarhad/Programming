#include<stdio.h>
int main()
{
    int i,j=1,k,a,n,f;
    scanf("%d    %d",&n,&a);
    for(i=1;i<=n||i<=a;i++){
       if(i%n==0&&i%a==0)
        f=i;
    }
    printf(" %d  and %d H C F  is =%d\n",a,n,f);
    return 0;
}
