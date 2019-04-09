#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

int main()
{
    ll m,n,i,j,cnt=0;
    cin>>m>>n;
    ll p,q;
    ll   k=m/n;
    if(m%n or  k<2)
    {
        cout<<"-1"<<endl;
    }
    else cout<<n<<" "<<(k-1)*n<<endl;
}
