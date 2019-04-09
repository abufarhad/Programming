#include<stdio.h>
int main()
{
    int a[20],i,n;
    printf("Enter the numbers :");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("Enter number to search :");
    scanf("%d",&n);
    for(i=0;i<5;i++){
    if(a[i]==n){
    printf("%d number position is %d",n,i);}}
    return 0;
}
