#include<stdio.h>
int main()
{
  int num,n;
  scanf("%d",&n);
  while(n--){
        int count=0;
  //printf("Enter a number  ");
  scanf("%d",&num);
  //for(;num!=0;num=num/10)
   // count++;
   while(num!=0)
  {
     num=num/10;
     count++;
 }
 printf("%d\n",count);}
  //printf(" Total disits in this numberis %d ",count);
  return 0;}
