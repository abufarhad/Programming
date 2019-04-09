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

   printf("Enter the number you want to search frequency :");
   scanf("%d",&a[i]);
   for(i=0;i<size;i++)
   {
       for(j=i+1;j<size;j++)
       {
           if(a[i]==a[j])
            count++;
       }
   }
   printf("Frequency of %d number is %d",a[i],count);

    return 0;
}




