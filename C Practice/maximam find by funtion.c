#include<stdio.h>
int main(){
int c,a[100],s,max;
printf("Enter number of integer");
scanf("%d",&s);
printf("Enter %d integer ",s);
for(c=0;c<s;c++){
scanf("%d",&a[c]);}
//f=maximam(a,s);
printf("The leargest integer is %d ",maximam(a,s));
//return 0;
}
int maximam(int a[],int s){
int i,f,c,m;
m=a[0];
for(i=1;i<=c;i++){
   if (a[c]>m){
    m=a[c];
   }}
return m;}
