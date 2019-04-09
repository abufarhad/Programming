#include<stdio.h>
int main()
{
    int i,j,k,l;
   scanf("%d",&l);
    for(i=0;i<l;i++){
     scanf("%d",&k);
     if(k%2==0)
        printf("Even\n");
     else
        printf("Odd");}
       return 0;
}
