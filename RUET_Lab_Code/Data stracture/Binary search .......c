#include<stdio.h>
int main(){

 int i,u,num,c,l,n,mid;
 printf("Enter element number :");
 scanf("%d",&n);
 int a[n];
 printf("Enter elements :");
 for(i=0;i<n;i++)
{  scanf("%d",&a[i]); }
int t;
printf("Enter number of quary\n");
scanf("%d",&t);
while(t--){ c=0;
 printf("Enter number you want to find :\n");
 scanf("%d",&num);
 l=0;u=n-1;
 while(l<=u)
 {
     mid=(l+u)/2;
     if(num==a[mid])
     {
        c=1;break;
         }
     else if(num<a[mid])
     {
         u=mid-1;
     }
     else
         l=mid+1;
     }
     if(c==0)
        printf("........ Not Found.......\n ");
     else
     printf("%d is........found.......at %d position\n",num,mid+1);}

    return 0;
}
