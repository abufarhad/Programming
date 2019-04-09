
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define scl(x)            scanf("%lld",&x)
#define pfl(x)            printf("%lld\n",x)
#define pn                 printf("\n")
#define debug           printf("I am here\n")
#define mp                make_pair
#define ppb                pop_back

int main()
{
    ll m,n,i,j,k;
    string s;
    cin>>n;
    while(n--)
    {
        ll mx=-1,ans=0,cnt=0;
        cin>>s;
        fr(i,s.size() )
        {
            if(s[i]=='(')
                cnt++;
            else
            {
                if(cnt)
                {
                    ans+=2;
                    cnt--;
                }
                if(s[i+1]=='(')
                {
                    mx=max(mx,ans);
                    ans=cnt=0;
                }
            }
        }
        cout<<max(mx,ans)<<endl;
    }
}
