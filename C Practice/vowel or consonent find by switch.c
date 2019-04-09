#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a cherecter : ");
  scanf("%c",&ch);
  switch(ch){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':

    printf("it is vowel ");break;
default:
    printf("it is a consonent ");}
  return 0;
}
