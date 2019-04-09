#include <stdio.h>
int main()
{
    char b[1000];
    int j, len, a=0, e=0, i=0, o=0, u=0;
    printf("Enter a string.\n");
    gets(b);
    len=strlen(b);
    for(j=0; j<len; j++)
    {
        if(b[j]=='a') a++;
        else if(b[j]=='e') e++;
        else if(b[j]=='i') i++;
        else if(b[j]=='o') o++;
        else if(b[j]=='u') u++;
        else if(b[j]=='A') a++;
        else if(b[j]=='E') e++;
        else if(b[j]=='I') i++;
        else if(b[j]=='O') o++;
        else if(b[j]=='U') u++;
    }
    printf("a=%d, e=%d, i=%d, o=%d, u=%d\n", a,e,i,o,u);
    return 0;
}


