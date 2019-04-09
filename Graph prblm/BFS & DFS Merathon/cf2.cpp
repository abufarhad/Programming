#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,m,n,r[5000],s,ans=10000;

    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;

     ans= min(ans, n*a/b);
    }
    printf("%.15lf\n",ans);

}
