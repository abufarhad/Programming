#include<stdio.h>
int main(){
int a,b,j,i,n,N[30];
printf("Enter the value of N\n:");
scanf("%d",&n);
printf("Enter the numbers\n");

for(i=0;i<n;++i){
        scanf("%d",&N[i]);}

for(i=0;i<n;++i){
for(j=i+1;j<n;++j){
        if(N[i]<N[j]){
            a=N[i];
            N[i]=N[j];
            N[j]=a;}
             }
        }
printf("The numbers arranged in ascancing order aregiven bellow\n");
for(i=0;i<n;++i){
printf("%d\n",N[i]);}
return 0;
}


