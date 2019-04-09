#include<stdio.h>
int main()
{
    int a[80],i,j,n,temp;
    printf("Enter the valu of n\n");
    scanf("%d",&n);
    printf("Enter the numbers :");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
    if(a[i]>a[j]){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }}}
    printf("Asscanding numbers are :");
    for(i=0;i<n;i++);{
    printf("%d",a[i]);
    }
    return 0;
}
