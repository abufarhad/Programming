#include<stdio.h>
int main()
{
    int start,link[10],info[10],ptr,i;
    for(i=0;i<3;i++){
            //printf("Enter info");
    scanf("%d%d",&info[i]
        //printf("Enter link");
     scanf("%d",&link[i]);
    }
    scanf("%d%d",&start,&ptr);
        for(i=0;i<3;i++){
    while(link[ptr]!=0){
        printf("%d",info[ptr]);
    ptr=link[ptr];}}
    return 0;
}
