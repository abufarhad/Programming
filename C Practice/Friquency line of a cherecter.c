//Write a program to find frequency line of cherecter.

#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,count=0;
    printf("Enter a string \n");
    gets(str);
    printf("Enter a cherecter to find frequency ");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
            count++;
    }
       for(i=0;str[i]!='\0';i++){
   printf("Frequency of %c =%d",ch,count); }
    return 0;
}
