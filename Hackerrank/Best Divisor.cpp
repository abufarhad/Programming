#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long


int main()
{

    ll m,n,t,b,c,d,i,j=0,k,x,y,z,cmp=-1,ans;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        if(n%i !=0) continue;
        else
        {
            x=i;
            ll sum=0;
            while(x>0)
            {
                sum+= x%10;
                x/=10;
            }
            if(sum>cmp)
            {
                cmp=sum;
                ans=i;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
