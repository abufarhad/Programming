#include<stdio.h>
int main()
{
    int i,j=1,k,n;
    float h,x,a[10],b[10],d1[10],d2[10],d3[10],d4[10],d5[10],d6[10],sum1,sum2;
    printf("enter num of data\n");
    scanf("%d",&n);
    printf("enter x and y\n");
    for(i=0; i<n; i++)
        scanf("%f %f",&a[i],&b[i]);
    h=a[1]-a[0];
    printf("forward difference table\n");
    for(i=0; i<n-j; i++)
    {
        d1[i]=b[i+1]-b[i];
        printf("%f\n",d1[i]);
    }
    j++;
    printf("\t");
    for(i=0; i<n-j; i++)
    {
        d2[i]=d1[i+1]-d1[i];
        printf("%f\n\t",d2[i]);
    }
    j++;
    printf("\t");
    for(i=0; i<n-j; i++)
    {
        d3[i]=d2[i+1]-d2[i];
        printf("%f\n\t\t",d3[i]);
    }
    j++;
    printf("\t");
    for(i=0; i<n-j; i++)
    {
        d4[i]=d3[i+1]-d3[i];
        printf("%f\n\t\t\t",d3[i]);
    }
    j++;
    printf("\t");
    for(i=0; i<n-j; i++)
    {
        d5[i]=d4[i+1]-d4[i];
        printf("%f\n\t\t\t\t",d5[i]);
    }
    j++;
    printf("\t");
    for(i=0; i<n-j; i++)
    {
        d6[i]=d5[i+1]-d5[i];
        printf("%f\n\t\t\t\t\t",d6[i]);
    }

    printf("enter your required value");
    scanf("%f",&x);

    for(i=0; i<n; i++)
    {
        if(x==a[i])
            break;
    }
    k=i;
    sum1=(1/h)*(d1[k]-((d2[k])/2)+((d3[k])/3)-((d4[k])/4)+((d5[k])/5));
    sum2=(1/(h*h))*(d2[k]-d3[k]+(.9167*(d4[k]))-(.833*(d5[k])));
    printf("\ndy/dx=%f",sum1);
    printf("\nd2y/dx2=%f",sum2);
    return 0;
}


