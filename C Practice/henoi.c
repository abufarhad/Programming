#include<stdio.h>
void henoi(int n,char src,char dst ,char aux){
if(n==1){
    printf("Move on dst %c to %c\n",src,dst);
    return 0;}

henoi(n-1,src,aux,dst);
printf("Move on dst %c to %c\n",src,dst);
henoi(n-1,aux,dst,src);}

int main(){
int h;
printf("Enter the line you want to solve");
scanf("%d",&h);
henoi(h,'A','C','B');
return 0;}
