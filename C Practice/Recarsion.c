#include<stdio.h>
int main()
{
 int i,n,m,p=1;
 printf("Enter your integer ");
 scanf("%d",&n);
 p=fact(n);

    printf("factorial is %d",p);
    //return 0;
}
int fact(int m){
if(m<=1)
    return(1);
else
   return( m*fact(m-1));
}
