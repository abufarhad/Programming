#include<stdio.h>
int main()
{
    int ar1[10][10],ar2[10][10],mul[10][10];
    int m,n,p,q,c,d,k,sum=0;
    printf("Enter the 1st matrix number of rows and columns\n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of 1st array");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("Enter a%d %d:",c+1,d+1);
            scanf("%d",&ar1[c][d]);
        }
    }
    printf("Enter the 2nd matrix number of rows and coiumns\n");
    scanf("%d %d",&p,&q);
    if(n!=p)
       {
           printf("multification is not possible\n");
       }
       else

       {


    printf("Enter the elements of 2nd matrix\n");
    for(c=0;c<p;c++)
    {
        for(d=0;d<q;d++)
        {
            printf("Enter b%d %d:",c+1,d+1);
            scanf("%d",&ar2[c][d]);
        }}}
        for(c=0;c<m;c++)
    {
        for(d=0;d<q;d++)
      {
          for(k=0;k<p;k++)
          {
              sum=sum+ar1[c][k]*ar2[k][d];
          }
          mul[c][d]=sum;sum=0;
      }}
      printf("\nproduct OF THE MATRIX:\n");
      for(c=0;c<m;c++)
    {
        for(d=0;d<q;d++)
      {
          printf("%d\t",mul[c][d]);
          if(d==1)
            printf("\n");
      }
    }
      return 0;
    }


