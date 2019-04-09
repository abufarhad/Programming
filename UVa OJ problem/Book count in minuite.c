// BAKI ACHE

#include<stdio.h>
int main()
{
    int i,j,m,b,temp ;
     int cnt=0,sum=0;
   scanf("%d%d",&b,&m);
   int a[b];
   for(i=0;i<b;i++){
    scanf("%d",&a[i]);
   }
   for(i=0;i<b;i++){
        for(j=i+1;j<b;j++){
        if (a[i]>a[j]){
        temp=a[i];
   a[i]=a[j];
   a[j]=temp;}}
  printf("%d ",a[i]);
  }
for(i=0;i<b;i++){
         int sum=0,cnt=0;
while(sum<=m){
    sum=sum+a[i];
    cnt++;
}}
printf("\n%d",cnt);

// int sum=0,cnt=0;
//  while(sum<=m){
//       cnt++;
//            sum=sum+a[i+1];
//printf("%d",sum);
//  }

 // }
//        printf("\n%d",cnt);

    return 0;
}
