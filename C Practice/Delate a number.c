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
    printf("Enter position  :\n");
   scanf("%d",&pos);
   for(i=pos;i<n;i++){
    a[i]=a[i+1];
       }
       n=n-1;
       printf("Result is ....\n");
     for(i=0;i<n;i++)
     {
         printf("%d ",a[i]);
     }

    return 0;
}



