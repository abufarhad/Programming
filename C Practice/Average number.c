#include<stdio.h>
int main()
{
 long long c,f,sum,a,b,n;
    int  avg;
    scanf("%d",&n);
    while(n--){
//    printf("Enter 3 number :");
//    scanf("%d %d %d",&f,&a,&b);
    scanf("%d %d",&a,&b);
   // printf("Sum is %d\n",sum);
   sum=a+b;
    avg=sum/2;
  //  printf("The value of avarage is %f",avg);
  printf("%d",avg);}
    return 0;
}
