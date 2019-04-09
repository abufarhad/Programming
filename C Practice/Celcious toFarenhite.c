#include<stdio.h>
int main()
{
    int c,f,a;
    printf("Enter the temperature of farenhight :");
    scanf("%d",&f);
    c=(f-32)*(5.0/9.0);
    printf("The value of celcious temperature is %d",c);
    return 0;
}
