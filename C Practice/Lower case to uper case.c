#include<stdio.h>
int main()
{
    char s[100],c,u;
    int i,j;
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'){
    //if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]-32;
        //s[i]=s[i]+32;
    }}
   // strupr(s);
   //strlwr(s);
    printf("Uper case is       %s",s);
    //printf("Lower case is %s",s);
    return 0;

}

