
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

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

#define file_read(filename)  freopen("input.txt","r",stdin);
#define file_write(filename)  freopen("output.txt","w",stdout);

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)


#define Max 10000005
bool a[Max];
ll p[Max],k=1;


ll prime(ll l, ll u)
{
    unsigned ll sum=0;
    ll i,j,cnt=0;
    a[0]=a[1]=1;
    for(i=4; i<=Max; i+=2)
    {
        a[i]=1;
    }
    for(i=3; i<=sqrt(Max); i+=2)
    {
        for(j=i*i; j<=Max; j=j+2*i)
        {
            a[j]=1;
        }
    }
    p[0]=2;

    for(i=3; i<=Max; i+=2)
    {
        if(a[i]==0)
        {
            p[k]=i;

            //cout<<p[k]<<" ";
            k++;
        }
   }
   for(i=l-1; i<=u-1; i++)
    {
        // cout<<p[i]<<" ";
        sum+=p[i];
    }
    return sum;
   }

/*
bool nP[100005];
int primes[5200], i, j, primeCnt;
ll start, l, r;

ll sieve(ll l, ll u )
{
    unsigned ll sum=0;
    int lim = sqrt(n);
    for(i = 2; i <= lim; i++)
    {
        if(!nP[i])
        {
            for(j = i + i; j <= n; j+=i)
                nP[j] = true;
        }
    }
    j = 0;
    for(i = 2; i <= n; i++)
    {
        if(!nP[i])
        {
            primes[primeCnt++] = i;
        }
    }
       for(i=l-1; i<=u-1; i++)
    {
        // cout<<p[i]<<" ";
        sum+=primes[i];
    }
    return sum;
}

*/
int main()
{
    ll n,m,i,j,k,l,u,t;
  //  ll m,t,u,sum=0;
    scl(t);

    for(m=1; m<=t; m++)
    {
        scl(l),scl(u);
        cout<<prime(l,u )<<endl;

    }

    return 0;
}
