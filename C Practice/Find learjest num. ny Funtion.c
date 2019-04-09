#include<stdio.h>
int main(){
int i,size,location,max,ar[20];
int find_max(int ar[],int size);
printf("Enter the number of element in array");
scanf("%d",&size);
printf("Enter %d number",size);
for(i=0;i<size;i++){
scanf("%d",&ar[i]);}
max=find_max(ar,size);
printf("Maximam element is =%d",max);
       }
int find_max(int a[],int n)
{
    int i,max ;
    max=a[0];
    for(i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];}}
            return max;}

