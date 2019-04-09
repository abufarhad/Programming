#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    double x[100],y[100],c[100],d[100],p,h,x0,y1[10][10],e=.00005;
    int i,j=1,count=0,n,m=1,a,s;
    cout<<"input n:";
    cin>>n;
    s=n;

    for(i=1;i<=n;i++)
    {
        printf("\nx[%d]=",i);
        cin>>x[i];
        printf("\ny[%d]=",i);
        cin>>y[i];
        cout<<"\n";
    }
    cout<<"Input x0:";
    cin>>x0;

    for(i=1;i<=n;i++)
    {
        if(x[i]==x0)
        break;
    }
    int k=i;

    while(n>1)
    {
        for(i=1;i<=n-1;i++)
        {
            y[i]=(y[i+1]-y[i]);
            y1[j][i]=y[i];
            cout<<y1[j][i]<<" ";
        }
        n--;
        j++;
    }

    h=x[2]-x[1];
    cout<<"\nh="<<h<<endl;
    cout<<y1[3][k-1]<<" "<<y1[3][k-2];

    double Truncation_error=((y1[3][k-1]+y1[3][k-2]))/(12*h);
    double Rounding_error=(3*e)/(2*h);

    cout<<"\nTruncation_error="<<Truncation_error<<endl<<"Rounding_error="<<Rounding_error<<endl;
}

