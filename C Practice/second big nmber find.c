#include<stdio.h>
int main()
{
    int i,j,k,l,a[10],big,secondbig,t;
    //scanf("%d",&t);
   // for(i=1;i<=t;i++){
    scanf("%d",&l);
    for(i=0;i<l;i++){
        scanf("%d",&a[i]);
        big=a[0];
    if(big<a[i])
        big=a[i];
    j=i;}
    secondbig=a[l-j-1];
    for(i=0;i<l;i++)
    {
    if(secondbig<a[i]&&j!=i)
        secondbig=a[i];}
  //printf("Case %d: %d",i,secondbig);}
    printf("%d is the second big number",secondbig);
    return 0;
}
