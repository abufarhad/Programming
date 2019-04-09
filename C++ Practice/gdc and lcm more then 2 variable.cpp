#include<bits/stdc++.h>
using namespace std;



int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int findgcd(int a[], int n)
{
    int result=a[0];
    for(int i=1;i<n;i++)

        result =gcd(a[i],result);
      //cout<<result<<" ";

    return result;
}



int lcm(int a[] ,int n)
{
   int  result =a[0];
    for(int i=1;i<n;i++)
    {
    result= ((result*a[i])/gcd(a[i],result));
      //cout<<result<<" ";
    }
    return result;
//return (m*n)/gdc(m,n); /// Formula use : m*n = lcm*gdc .
}


int main( )
{
    int i,j,m,n,t;
    cin>>t;
   while(t--){
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }

    //cout<<"GDC is = "<<findgdc(a,n)<<endl;
    cout<<findgcd(a,n)<<" "<<lcm(a,n)<<endl;
    //cout<<lcm(a,n)<<endl;
    }
    //cout<<"LCM is = "<<lcm(a,n)<<endl;
}


