
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,a,b,ans;
    while(cin>>n>>m)
    {
        if(n>m)
        swap(n,m);
        {
            a=(m*(m+1))/2;
            b=(n*(n+1))/2;
            // cout<<a<<" "<<b<<endl;
            ans=a-b+n;
        }
            printf("Sum of %lld to %lld is -> %lld;\n",n,m,ans);


    }
}
