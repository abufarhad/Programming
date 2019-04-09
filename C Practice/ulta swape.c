#include<stdio.h>
int main(){
int i,j;
int ara[5]={1,2,3,8,6};
 int ara2[5];
for(i=0,j=4;i<5;i++,j--){
ara2[j]=ara[i];
}
for(i=0;i<5;i++){
ara[i]=ara2[i];
        printf("%d\n",ara[i]);}
return 0;
}
