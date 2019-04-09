#include<stdio.h>
int main(){
int i,j,table[100][10],n;
for(i=0;i<=100;i++){
    for(j=1;j<=10;j++){
        table[i-1][j-1]=i*j;
    }
} scanf("%d",&n);
for(i=1;i<=10;i++){
printf("%d x %d =%d\n",n,i,table[n-1][i-1]);
}
return 0;
}


