#include<stdio.h>
int main()
{
    int i,j,l,temp=0,count=0;
    scanf("%d",&l);
    int a[l];
    for(i=0;i<l;i++)  {
         scanf("%d",&a[i]);  }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            count++;
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
}}}
count++;
    }
    printf("count =%d\n",count);
    printf("Value are sorted by this sequation : ");
    for(i=0;i<l;i++)
    {
        printf("  %d",a[i]);
    }
    return 0;
}
