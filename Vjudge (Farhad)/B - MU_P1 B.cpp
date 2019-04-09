#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x++)
#define ps printf(" ")
#define pn printf("\n")

#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})
#define sv(a) sort(a.begin(),a.end())

int main()
{
    ll m,n,i,j,c,cnt=0,cn=0;
    scl(m);
    ll a[m];
    for(i=0; i<m; i++)
    {
        scl(a[i]) ;
    }
   ll  val1=0,val2=0;
    for( i=0, j=m-1,c=0; c<n; c++)
        if(c&1)
        {
            if(a[i]>a[j])
                val1+=a[i], i++;
            else
                val1+=a[j], j--;
        }
        else
        {
            if(a[i]>a[j])
                val2+=a[i], i++;
            else
                val2+=a[j], j--;
        }
    // cout<<ans<<endl;
    cout<<val1<<" "<<val2<<endl;


}

