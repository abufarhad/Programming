#include<stdio.h>
int main()
{
    int a,b,c;
    /* printf("Hello world\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d + %d = %d\n",a,b,c);
    */
    scanf("%d",&a);
    if( a%2==0)
    {
        printf("%d is Even \n",a);
    }
    else
    {
         printf("%d is Odd \n",a);
    }

    return 0;
}
