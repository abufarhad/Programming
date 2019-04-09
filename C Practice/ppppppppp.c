#include<stdio.h>
int main()
{
    int i,j,k,a,b;
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
        k=0;break;}
    else
        printf("%d is prime number");



//    scanf("%d%d",&a,&b);
//    for(i=a;i<=b;i++){
//            k=1;
//        for(j=2;j<i;j++){
//    if(i%j==0){
//            k=0;
//        break;}}
//     if(k)
//    printf("%d\n",i);
//    }
    return 0;
}
