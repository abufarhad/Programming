#include<stdio.h>
int main()
{
    int rem,n,reverse=0,temp;
    printf("Enter a integer");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        reverse=reverse*10+rem;
        temp=temp/10;
    }
    if(reverse==n)
        printf("%d is palindrome",n);
    else
        printf("%d is not a palindrome",n);
    return 0;
}
