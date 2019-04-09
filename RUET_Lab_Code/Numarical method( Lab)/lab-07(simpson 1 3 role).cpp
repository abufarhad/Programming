#include<bits/stdc++.h>
using namespace std;

double func1(double x){
 return (1.00/(1.00+x));
 }

int main()
{
    float x[100],y[100],c=0,d;
    int a,b,i=0,j,n=0;
    float h;

int f[100],cnt=0,temp=0,tem=0,temp1=0;

printf("Enter the limit of this function\n");
cin>>a>>b;
printf( "Enter value of h\n");
cin>>h;
while(b>=c){
        n++;
    d=func1(c);
    y[i]=d;
    printf("x= %llf  y= %llf\n",c,d);
    c=c+h;
    x[i]=c;  i++;

    }
///trapezooidal rule
    double res1=0;
    for(i=1; i<n-1; i++)
        res1=res1+y[i];
    res1=2*res1;
    res1=res1+y[0]+y[n-1];
    res1=res1*(h/2.0);
    printf("\ntrapezoidal rule : %.4lf\n\n",res1);
/// simpson 1/3
    float sum01=0,sum02=0,result01;
    for(i=1; i<n-1; i++)
    {
        if(i%2!=0)
            sum01=sum01+y[i];
        else
            sum02=sum02+y[i];
    }
    result01=(h/3.0)*( y[0]+4*sum01+2*sum02+y[n-1] );
    printf("\n1/3 simpson's rule : %.4lf\n\n",result01);
    /// simpson 3/8
    double sum22=0,result02;
    j=1;
    for(i=1;i<n-1;i++)
    {
        if(i%3 == 0)
        {
            sum22=sum22+2*y[i];
        }else sum22=sum22+(3*y[i]);
       // printf("%f  %f\n",y[i],sum22);
    }
    result02=( (3.0*h)/8.0)*( y[0]+sum22+y[n-1] );
    printf("\n3/8 simpson's rule : %.4lf\n\n",result02);

    return 0;
}

