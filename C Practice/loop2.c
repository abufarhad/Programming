#include<stdio.h>
int main(){
int i,n=12;
i=1;
while(i<=n){
    if(n%i==0){
        printf("%d\n",i);
        i++;
    }
}
return 0;
}
