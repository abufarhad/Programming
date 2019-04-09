#include<stdio.h>
int main()
{
int i,j,k,l;
scanf("%d",&k);
for(i=0;i<=k;i++){
    scanf("%d",&l);
    if(sqrt(l)==1)
        printf("YES");
    else
        printf("NO");
}
return 0;


}
