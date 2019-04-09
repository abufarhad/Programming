#include<stdio.h>
int main(){
char m,n;
printf("Enter a alphabet :");
scanf("%c",&n);
if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='O'||n=='o'||n=='U'||n=='u')
   {
    printf(" %c IS VOWEL",n);}
else
    printf("%c IS CONSONENT",n);
return 0;
}

