#include<bits/stdc++.h>
using namespace std;

long long  gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

//int gdc();
long long  lcm(int m,int n)
{
return (m*n)/gcd(m,n); /// Formula use : m*n = lcm*gdc .so, -> lcm=(m*n / gcd)
}


int main( )
{
    long long  i,j,m,n,t;
    cin>>t;
    while(t--){
    cin>>m>>n;
    gcd(m,n);
    cout<<"GCD is = "<<gcd(m,n)<<endl;
//    cout<<"LCM is = "<<lcm(m,n)<<endl;}
   //cout<<lcm(m,n)<<" "<<gcd(m,n)<<endl; }

   if((m*n)==lcm(m,n)){ printf("yes\n");
   }
   else printf("no\n");
   }
}

