#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,m,n,f,s,need,sum[100000];
    cin>>n>>s;
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    m=n;
    while(m>0)
    {
        need=0;
        int cnt=0;
        for(i=0; i<n; i++)
        {
            sum[i]= a[i]+(i+1)*m;

            // cout<<sum[i]<<" ";
        }

        for(j=0; j<m; j++)
        {
            need= need+sum[j];
        }
        cout<<"need "<<need<<endl;

        if(need<=s)
        {
            printf("%lld %lld\n",m,need);
            break;
        }
        if(need>s&&m==1)
            printf("0 0\n");
        m--;


    }
    return 0;
}

