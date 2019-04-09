#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number you want to solve of henoie game\n");
   scanf("%d",&n);
   henoi(n,'A','C','B');
   return 0;
}
void henoi(int n,char src,char dst ,char axu)
{
    if (n==1){
        printf("Move dst %c to %c \n",src ,dst);return 0;}

        henoi(n-1,src,axu,dst);
        printf("Move dst %c to %c\n",src,dst);
        henoi(n-1,axu,dst,src);

}
