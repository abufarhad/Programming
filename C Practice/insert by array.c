#include<stdio.h>
int main()
{
    int i,n,m,pos,x;
    printf("Enter how much element  : " );
    scanf("%d",&m);
    int a[m];
    printf("Enter the numbers :");
    for(i=1;i<=m;i++)
    scanf("%d",&a[i]);
   printf("Enter position and insert number");
   scanf("%d %d",&pos,&x);
   for(i=m;i>=pos;i--){
    a[i]=a[i+1];} a[pos]=x;
m=m+1;
   printf("Resultent of array is : ");
   for(i=1;i<=m;i++){
    printf("%d\n",a[i]);
   }
   return 0;}
