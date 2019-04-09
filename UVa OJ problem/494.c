#include<stdio.h>
int main()
{
    int i,count=0;
    char name[1000];
    (gets(name));{
        for(i=0;name[i]!='\0';i++)
        {
            if(
               ((name[i]>='a'&&name[i]<='z')||(name[i]>='A'&&name[i]<='Z'))&&
                ((name[i+1]<'a'||name[i+1]>'z')&&(name[i+1]<'A'||name[i+1]>'Z'))
                )
        count++;}
    printf("%d",count);}
    return 0;
}
