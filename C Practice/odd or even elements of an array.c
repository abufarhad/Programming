#include<stdio.h>
int main(){
int arr[10],oar[10],ear[10];
int i,j=0,k=0,n;
printf("Enter the  size of array ar\n:");
scanf("%d",&n);printf("Enter the elements of array \n");
for(i=0;i<n;++i){
        scanf("%f",&arr[i]);}
for(i=0;i<n;++i){
        if(arr[i]%2==0)
        {
            ear[j]=arr[i];
            j++;
        }
        else{
            oar[k]=arr[i];k++;}}

printf("the elements of OAR are\n");
for(i=0;i<j;++i){
        printf("%d\n",oar[i]);}
printf("the elements of EAR are\n");
for(i=0;i<k;++i){

printf("%d\n",ear[i]);}
return 0;
}

