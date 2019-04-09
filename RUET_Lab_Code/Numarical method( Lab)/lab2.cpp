#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;

int m,n,r,o,p,a;

float f(float x)
{
    return m*pow(x,p) + n*pow(x,p-1) + r*pow(x,p-2) +o ;
}

float g(float x)
{
    return p*m*pow(x,p-1) + (p-1)*n*(x,p-2) + (p-2)*r*pow(x,p-3) ;
}

int main()
{
    cin>>m>>n>>r>>o>>p>>a;


    float b=a-(f(a)/g(a));
    float c=b-(f(b)/g(b));
    float d=c-(f(c)/g(c));

        cout<<"\nFIRST Root is :"<<b<<"\n";
        cout<<"\nSECOND Root is:"<<c<<"\n";
        cout<<"\nTHIRD Root is :"<<d<<"\n";

return 0;

}
