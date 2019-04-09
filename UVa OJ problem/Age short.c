#include<stdio.h>
#include<algorithm.h>
//using namespace std;
int main(){
long int a[2000005], n,i;
while((scanf("%ld",&n)==1)){
    if(n==0) break;
    else
    for(i=0;i<n;i++){
           scanf("%ld",a[i]);}
    sort(a,a+n);
      for(i=0;i<n;i++){
    printf("%ld",a[i]);
             if(i<(n-1)) break;
             else cout<<" ";}  cout<<endl;
              //printf("\n");
}
return 0;
}
