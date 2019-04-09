#include<stdio.h>
int main()
{
   int i,j,k,l,a[100],f[100];
   int size,count=0;
   scanf("%d",&size);

   for(i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("Dublicate elements are :");
   for(i=0;i<size;i++)
   {
       for(j=i+1;j<size;j++)
       {
           if(a[i]==a[j]){
            count++;
            printf("%d  ",a[i]);
           break;}
       }
   }
   printf("\nTotal number dublicate in this array is =%d\n",count);
   return 0;
}




