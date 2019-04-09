#include<bits/stdc++.h>
using namespace std;
int main(){
long a[200000],n,i;
while(scanf("%ld",&n)==1){
    if(n==0) break;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
sort(a,a+i);
for(i=0;i<n;i++){
    printf("%ld",a[i]); if(i<(n-1)) cout<<" ";
}
printf("\n");
}
return 0;
}
