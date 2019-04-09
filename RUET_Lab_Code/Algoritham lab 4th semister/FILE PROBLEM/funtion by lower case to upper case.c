#include<stdio.h>
//void upper(char s[]);
int main()
{

    char s[100],c,u;
    printf("Enter a string\n");
    gets(s);
    upper(s);
    printf("Entered string upper case is     %s",s);
      //return 0;
}
void upper(char s[]){
int i;
for(i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;}

}
