#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main (void)
{
    // freopen("inp.text","r",stdin);
    //  freopen("out.text","w",stdout);
    int n, i;
   cout<<"Enter the num of objects"<<endl;
    cin>>n;
    double x[n], y[n], sx=0, sy=0, sx2=0, sxy=0, a0,a1, A,B;
   cout<<"Enter "<<n<<"pairs of x and y"<<endl;
    for (i=0; i<n; i++)
        cin>>x[i]>>y[i];

long long s[100];

    for(i=0; i<n; i++)
    {
        s[i]=log10(y[i]);
        sx=sx+x[i];
        sy=sy+s[i];
        sx2=sx2+(x[i]*x[i]);
        sxy=sxy+(x[i]*s[i]);
    }
    a0= ((sx2*sy)-(sx*sxy))/((n*sx2)-(sx*sx));
    a1= ((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
    A=pow(2.7183,a0);
    B=a1;
    cout<<"a= "<<A<<endl;
    cout<<"b= "<<B<<endl;
//fclose(stdin);
//fclose(stdout);
    return 0;
}
