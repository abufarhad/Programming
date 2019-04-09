#include<stdio.h>
int main()
{
    int i,j,k,n,p,cnt=0;
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            k=0;
            printf("Not prime");
            break;
        }
        else
            printf("Prime");
        break;
    }
    return 0;
}
