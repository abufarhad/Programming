#include<stdio.h>
int main()
{
    int a[100],n,i,b[100],d,c;
    printf("Enter elelment how you can need\n");
    scanf("%d",&n);
    printf("Enter the array elelment \n");
    for(c=0; c<n; c++)
        scanf("%d",&a[c]);


    for(c=n-1,d=0; c>=0; c--,d++)
        b[d]=a[c];
    for(c=0; c<n; c++)
        a[c]=b[c];


    printf("Reverse array is \n");
    for(c=0; c<n; c++)
        printf("%d\n",a[c]);
    return 0;
}

