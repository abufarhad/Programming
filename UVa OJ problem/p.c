#include<stdio.h>
int main()
{
   int n;
   while(scanf("%d",&n)!=EOF){
   if(n%4==0||n%100==0||n%400==0){
    printf("This is leap year.\n");
  if(n%15==0)
    printf("This is huluculu festival year.\n");
     if(n%55==0)
    printf("This is bulkulu festival year.\n");}

   else{
     if(n%15==0)
    printf("This is huluculu festival year.\n");
   else
    printf("This is an ordinary year.\n");}}
        return 0;
}
