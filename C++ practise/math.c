#include<stdio.h>
int main()
{
    int i,d,k;
   while(scanf("%d",&k)){
        if(k==0)
            break;
        d=((k)*(2*k+1)*(k+1))/6.0;
        printf("%d\n",d);

    }
    return 0;
}
