#include<stdio.h>
int main()
{
int i,a[20],n;
    printf("Enter the element of array");
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    printf("enter the number which you are search ");
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
    if(a[i]==n){
    printf("%d number position is =%d",n,i+1);break;
   }}
    return 0;
}
