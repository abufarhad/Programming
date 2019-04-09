#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld\n",x)
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


#define Max 100000005
bool p[Max];
ll prime[Max],k=1;

void sieve(ll n)
{
    ll i,j;
    ll lim=sqrt(n);
    for(i=2;i<=lim;i++)
    {
        if(!p[i])
        {
        for(j=i+i;j<=n;j+=i)
            p[j]=true;
        }
      }
      for(i=2;i<=n;i++)
      {
          if(!p[i])
          {
              //cout<<p[i]<<" ";
              prime[k]=prime[k-1]+i;
              k++;
          }
      }

}

int main()
{
    ll n,m,i,j,k,l,u,t;
    scl(t);

    sieve(100000000);
    for(m=1; m<=t; m++)
    {
        scl(l),scl(u);

        printf("%lld\n",prime[u]-prime[l-1]);
    }

    return 0;
}
