#include<bits/stdc++.h>
using namespace std;
long long cs[10000000];   ///Global array tai 10^8 porjonto rakha jabe
int main()
{
    long long i,j,n,sum=0,q,a,b,s,m;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>> q;
        sum=sum+q;
        cs[i]=sum;
    }
    //cout<<cs[i]<<endl;
    cin>>m;

    for(i=0; i<m; i++)
    {
        cin>>a>>b;
        if(a==0)  s=cs[b];
        else   s=cs[b]-cs[a-1];
        cout<<s<<endl;
    }

    return 0;
}


