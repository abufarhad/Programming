#include<stdio.h>
int main()
{
    int i,j,n,m,k[122],l,sum=0;
    float avg;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&m);
       for(j=0;j<m;j++)
       {
           scanf("%d",&k[j]);
           for(j=0;j<m;j++){
           sum=sum+k[j];}

           avg=sum/m;
       }

   }
   printf("%.2f\n",avg);
       return 0;
}
