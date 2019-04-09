//#include<iostrem>
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char c;
    while(scanf("%c",&c)==EOF)
    { int count=0;
        while(1){
        if(c=='\n'){
            break;}
        else if (isalpha(c)){
                 while(isalpha(c)){
                       scanf("%c",&c);}
                       count++;
        }
        else{
            scanf("%c",&c);
        }
    }
    printf("%d",count);
    return 0;}

    }



