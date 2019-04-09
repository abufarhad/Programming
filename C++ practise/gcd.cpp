#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int m,int n)
{
    int l=(m*n)/gcd(m,n);
    return l;
}


int main( )
{
    int i,j,m,n;
//    cin>>m>>n;
//    gcd(m,n);
//    cout<<"GCD is = "<<gcd(m,n)<<endl;
//    cout<<"LCM is = "<<lcm(m,n)<<endl;

cin>>n;
long long ans=0;
for(int i=1;i<=4500;i++) ans+=i;
cout<<ans;
}

