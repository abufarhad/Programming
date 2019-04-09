#include<stdio.h>
int main()
{
    int n,i,j,t,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%d",&n);
     if(n==1)  { count=0;  break;}
    if(n!=1 && n%2!=0 && n%3!=0) {while(n%2==0 && n%3==0){   count=0;  n=n-1;  count++; }}
      if (n!=1 && n%2==0)    {while(n==1){   count=0;  n=n/2;  count++;  }}
     if (n!=1 && n%3==0)  {  while(n==1){   count=0;  n=n/3;  count++;  }}
     printf("%d",count);
    }
    return 0;
}
