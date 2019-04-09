#include<stdio.h>
int main()
{
    int i,j,k,l,cnt=0,num=0,n;
    scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&l);
    if(l>0)
        cnt++;
    else
        num++;}
    printf("%d %d",cnt,num);

    return 0;

}
