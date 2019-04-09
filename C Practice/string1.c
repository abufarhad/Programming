#include<stdio.h>
#include<string.h>
int main()
{
char str[1000];
int i, j=0;
//scanf("%s",str);
gets(str);
//printf("%s\n",str);
//puts(str);
//strcmp("boy","girl");
for(i=0;i<strlen(str);i++)
    while(str[i]!='\0')
        j++;
printf("%d",j);

return 0;
}

