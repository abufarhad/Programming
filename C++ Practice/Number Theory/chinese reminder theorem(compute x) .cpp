#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
int gcdextend(int a,int b,int *x,int *y);

int gcdextend(int a, int  b, int &x, int &y)
{

    if(b==0)
    {
        x=1;y=0;
        return a;
    }
    int x1,y1;
    int gcd=gcdextend(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);

    return gcd;

}


int inverse(int a, int m)
{
    int x,y;
    int g = gcdextend(a, m, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        // m is added to handle negative x
        int res = (x%m + m) % m;
        cout << "Modular multiplicative inverse is " << res;
    }
}
*/
int inverse(int a, int m)
{
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;

    if (m == 1)
        return 0;
    // Apply extended Euclid Algorithm
    while (a > 1)
    {
        // q is quotient
        q = a / m;
        t = m;
        // m is remainder now, process same as
        // euclid's algo
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    // Make x1 positive
    if (x1 < 0)
        x1 += m0;
    cout<<x1<<endl;

    return x1;
}

int findMinx(int num[], int rem[], int k)
{
    int prod=1,i;
    for(i=0; i<k; i++)
    {
        prod*=num[i];
    }

    int result=0;

    for(i=0; i<k; i++)
    {
        int pp=prod/num[i];
        result+=rem[i]*inverse(pp, num[i]) *pp;
    }
    return result%prod;
}

int main()
{
    int m,n,i,j,k,r,t;
    cin>>t;
    while (t--)
    {
        cin>>n>>r;
        int num[n],rem[n];
        for(i=0; i<n; i++)cin>>num[i];
        for(i=0; i<r; i++)cin>>rem[i];

        cout<<findMinx(num, rem, n)<<endl;
    }
}
