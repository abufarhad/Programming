//*********************//
// MD. MOSHIUR RAHMAN  //
// CSE'15, RUET        //
// ROLL: 1503066       //
//*********************//
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<0;
    else if(n==2)
        cout<<1;
    else
    {
        ll pre1=1,pre2=0,ans=0;
        for(int i=3;i<=n;i++)
        {
            ans=pre2+pre1;
            pre2=pre1;
            pre1=ans;
        }
        cout<<ans;
    }
    return 0;
}
