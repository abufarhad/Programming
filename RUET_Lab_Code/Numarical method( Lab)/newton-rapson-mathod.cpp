#include<bits/stdc++.h>
using namespace std;
int main()
{
   cout.precision(6);
    //cout.setf(ios::fixed);


    double coeff[10],power[10],diffe_coeff[10],diffe_power[10],n,x0,a,b=0,c=0,x1;
    cout<<"Enter the highest degree of required equation\n";
    cin>>n;
    a=n;

    cout<<"Enter the coeffficients of equation\n";
    for(int i=0; i<n+1; i++)
    {
        cin>>coeff[i];
    }

    cout<<"The power of the terms of equation\n";
    for(int i=0; i<n+1; i++)
    {
        power[i]=a;
        a--;
        cout<<power[i]<<endl;
    }

    for(int i=0; i<n+1; i++)
    {
        diffe_coeff[i]=coeff[i]*power[i];
        diffe_power[i]=power[i]-1;
    }
    cout<<"The coefficient and power of every term of  first derivative of f(x)\n";
    for(int i=0; i<n+1; i++)
    {
        cout<<diffe_coeff[i]<<"    "<<diffe_power[i]<<endl;
    }

    cout<<"Enter the initial guesses\n";
    cin>>x0;
    do
    {
        for(int i=0; i<n+1; i++)
        {
            b+=coeff[i]*pow(x0,power[i]);
        }


        cout<<"the value of f(x)="<<b<<endl;
        for(int i=0; i<n+1; i++)
        {
            c+=diffe_coeff[i]*pow(x0,diffe_power[i]);
        }
        cout<<"The value of  f'(x)="<<c<<endl;
        x1=x0-(b/c);
        x0=x1;
    }
    while(abs(x0-x1)>.0001);
    cout<<"The root of the equation is = "<<x1<<endl;
    return 0;
}
