#include<stdio.h>
//int main(){
//int i,j,r ,k=0;
//scanf("%d",&r);
//for(i=1;i<=r;i++){
//        k++;
//    for(j=1;j<=i;j++)
//        printf("%d",k);
//printf("\n");
//
//}
//
//return 0;}

int main()
{
int line,i,j,prime_number[10],c,k,t,l;
while(scanf("%d",&line)!=EOF)
{
for(i=0;i<line;i++)
{
t=0;
for(j=0;j<10;j++)
{
scanf("%d",&prime_number[j]);
}
for(l=0;l<10;l++)
{
c=0;
for(k=1;k<100;k++)
{
if(prime_number[l]%k==0)
c++;
}
if(c<=2)
t++;
}
printf("%d\n",t);
}
}
return 0;
}
