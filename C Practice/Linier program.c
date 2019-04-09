/// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!      baki ache       !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include<stdio.h>
int main()
{
    int i,n,cnt=0,m;
    printf("Enter how much element  : " );
    scanf("%d",&m);
    int a[m];
    printf("Enter the numbers :");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("Enter number to search :");
    scanf("%d",&n);
    for(i=0;i<m;i++){
    if(a[i]!=n){
                 printf( "NOT FOUND"); break;}
    else
            cnt++;
    printf("%d number position is %d \n",n,i);}
    printf("%d number have in the array  %d times ",n,cnt);
    return 0;
}
