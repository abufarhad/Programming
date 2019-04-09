#include <stdio.h>
int main()
{
    int n, a[100], b[100], c[100], i;
    printf("How many numbers in array 1 & 2?\n");
    scanf("%d", &n);
    printf("Enter the 1st array.\n");
    for(i=0; i<n; i++)
        a[i]=func1();
    printf("Enter the 2nd array.\n");
    for(i=0; i<n; i++)
        b[i]=func2();
    printf("Summation of two arrays.\n");
    for(i=0; i<n; i++)
        c[i] = func3(a[i], b[i]);
    for(i=0; i<n; i++)
        printf("%d\n", c[i]);
    return 0;
}
int func1()
{
    int d;
    scanf("%d", &d);
    return d;
}
int func2()
{
    int e;
    scanf("%d", &e);
    return e;
}
int func3(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

