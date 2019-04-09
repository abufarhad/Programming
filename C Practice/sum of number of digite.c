#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    scanf("%d",&l);
    for(i=0;i<l;i++){
        scanf("%d",&k);
    for(j=1;j<=k;j++){
        for(m=1;m<=k-j;m++)
            printf(" ");
        for(m=0;m<j+1;m++)
            printf(" *");
            printf("\n");
    }}return 0;
}
