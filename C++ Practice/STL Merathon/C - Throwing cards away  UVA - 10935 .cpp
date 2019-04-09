

///*****************used circular queue******************

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
    int m,n,i,k,j,l;
    queue<int>q;
    while((cin>>n),n)
    {
        for(i=1; i<=n; i++)
        {
            q.push(i);
        }
        printf("Discarded cards:");
        while(q.size()>1)
        {
            printf(" %d",q.front());
            q.pop();
            ll x=q.front();
            q.pop();
            if(!q.empty())
            {
                cout<<",";
            }
            q.push(x);
        }
        cout<<endl;
        printf("Remaining card: %d\n",q.front());
    q.pop();
    }
}
