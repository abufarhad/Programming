#include<stdio.h>
int main()
{
    int i,n;
    //printf("Enter n value  :");
    scanf("%d",&n);
    printf("n = %d\n",n);
    int ar[n];
    //printf("Enter %d number :\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&ar[i]);}
    printf("positive is :" );
    for(i=0;i<n;i++){
    if(ar[i]>0)
printf(" %d ",ar[i]);
printf("mot is =%d+%d",ar[i]);}}
printf("Negetive is :" );
for(i=0;i<n;i++){
if(ar[i]<0)
    printf("%d ",ar[i]);
    printf("mot is =%d+%d",ar[i]);}



return 0;
}
