#include<stdio.h>
//int sort(int n,int a[]);
int main()
{
    int n,i,j;   double a[100],t=0;
    scanf("%d",&n);
    printf("Before sorting");
    for(i=0;i<n;i++){
    scanf("%lf",&a[i]);  }

//int sort(int n,int a[])
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;}}}

 printf("After sorting ");
    for(i=0;i<n;i++){
    //printf("The value is %d\n ",a[i]);
printf("%d ",a[i]);}
return 0;}


