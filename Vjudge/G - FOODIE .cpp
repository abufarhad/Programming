
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
    ll m,b,n,i,t,k,j,r;
    cin>>t;
    ll a[10000];
    while(t--)
    {
        ll sum=0,add=0;
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>r;
            for(j=0; j<r; j++)
            {
                cin>>b;
                sum+=b;
            }
            a[i]=sum;
            sum=0;
        }
        sortA(a);

ll save=a[0];
        for(i=0; i<n; i++)
        {

            save+=a[n-1];
            n--;
            if(save>k)
            {
                continue;
            }


        }
cout<<save<<endl;


    }

    return 0;
}

