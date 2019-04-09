#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos,num;
    printf("Enter position :  & Enter element") ;
    scanf("%d%d",&pos,&num);
     for(i=n;i>=pos;i--)
     {
        a[i]=a[i-1];
     }
     n++;
     a[pos-1]=num;
     for(i=0;i<n;i++)
     {
         printf("%d ",a[i]);
     }

    return 0;
}
