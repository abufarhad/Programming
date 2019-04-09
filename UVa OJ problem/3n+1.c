#include<stdio.h>
int main()
{
    int i,n,d ;
    while(scanf("%d",&n)==EOF){
        if(n==1)
            break;
         else{
            if(n%2==1)
            d=3*n+1;
            else
                d=n/2;
    }}
    printf("%d",d);
    return 0;
}
