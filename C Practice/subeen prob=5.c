#include<stdio.h>
int main()
{
    int i,j,n,res;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    char str[45];
    scanf("%s",str);
    printf("%d\n",str[0]+str[1]+str[2]);}
return 0;
}
