#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[2*100015],b[2*100015];

int main()
{
    ll m,n,i;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    ll lpos=n-1, fpos=0,lsum=0,fsum=0,ans=0;

    while(lpos>=fpos)
    {
        if(lsum<=fsum)
        {
            lsum+=a[fpos++];
        }
        else
        {
            fsum+=a[lpos--];
        }
        if(lsum==fsum) ans=fsum;
    }
    cout<<ans<<endl;

}
