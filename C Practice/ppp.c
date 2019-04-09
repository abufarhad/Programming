#include<stdio.h>
int main()
{
   int i,j,cnt=0,tm,n;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
            while(a[0]>a[i]&&a[n-1]<a[i]) {
            if(a[i]<a[j]){
        tm=a[i]; a[i]=a[j]; a[j]=tm; cnt++;}}

    }
   }
   printf("%d\n",cnt);
    for(i=0;i<n;i++){ printf("%d ",a[i]);}
    return 0;
}
