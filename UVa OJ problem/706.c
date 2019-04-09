#include<stdio.h>
int main()
{
    int n,m,i,j,x,c=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&x);
       for(j=0;j<n;j++){
        if(x>=array[j]){
            c++;
        }
       }
       printf("%d\n",c);
       c=0;
    }
    return 0;
}
