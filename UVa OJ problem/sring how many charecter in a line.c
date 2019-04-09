#include <stdio.h>
#include<string.h>
int main()
{
int n,i,x;
char numbers[1000];
scanf("%d",&n);
int count[100]={0};
x=n;
while(n--)
{
scanf(" %[^\n]s",numbers);
char *word=strtok(numbers, " ");
while(word!=NULL)
{
word = strtok(NULL, " ");
count[n]++;
}
}
while(x--)
{printf("%d\n",count[x]);}
return 0;
}

