
#include<bits/stdc++.h>
using namespace std;

long long bigm(long long b,long long p,long long m)
{
    if(p==0) return 1;
    //if(p==1) return b;
    if(p%2==0)
    {
        long long c=bigm(b,p/2,m);
        return c*c%m;
    }
    if(p%2==1)
    {
        return (b*bigm(b,(p-1),m))%m;
    }
}

int main()
{
    int long long a,b,c,d,res;
    while( cin>>a>>b>>c)
    {
        res=bigm(a,b,c);
        cout<<res<<endl;
    }
}
