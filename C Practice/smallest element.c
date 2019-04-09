#include<stdio.h>
int main(){
int i,n;
float arr[100];
printf("Enter totaL number of element (1 to 100):");
scanf("%d",&n);printf("\n");

for(i=0;i<n;++i){
printf("enter  number %d\n",i+1);
scanf("%f",&arr[i]);}
for(i=1;i<n;++i){
        if(arr[0]>arr[i])
        arr[0]=arr[i];
        }
printf("smallest element=%.2f",arr[0]);
return 0;
}

