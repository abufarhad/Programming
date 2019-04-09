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
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

int main()
{
    ll i,m,n,j,cnt=1,cn=1,save,d=0;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
    for(i=0,j=0; i<n-1; i++)
    {
        d=abs((a[j]-a[i+1]) )  ;
       // cout<<d<<" ";

        if(d==1||d<1)
        {
            cnt++;
        }
        else
        {
            //j=j+1;
            a[j]=a[++j];
            cout<<a[j]<<endl;
            cn=max(cnt,cn), cnt=1;

        }
    }
    save=max(cnt,cn);
    cout<<endl<<save<<endl;
    return 0;
}
