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
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)

#define Pi               2*acos(0.0)
#define ms(a,b)       memset(a, b, sizeof(a))
#define MP             make_pair
#define db             double
#define ll                long long
#define EPS           10E-10
#define ff              first
#define ss              second
#define sqr(x)        (x)*(x)


#define MOD          10000007
#define loop(i,n)        for(int i=0;i<n;i++)
#define loop1(i,n)       for(int i=1;i<=n;i++)
#define REP(i,a,b)       for(int i=a;i<b;i++)
#define RREP(i,a,b)      for(int i=a;i>=b;i--)
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d: ",z)
#define LINE_PRINT_CASE  printf("Case %d:\n",z)
#define CASE_PRINT       cout<<"Case "<<z<<": "
#define all(a)           a.begin(),a.end()
#define intlim           2147483648
#define infinity         (1<<28)


ll  binarySearch( ll a[] , int l, int r, int x)
{
    ll m, ans=-1;
    while (l <= r)
    {
        m = (l + r)/2;
        if(a[m]== x)
        {
            ans=m;
            r=m-1;
        }
        else if (a[m] > x) r = m - 1;
        else   l = m + 1;
    }
    return ans;
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,ans;
    scl(n);
    scl(t);
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    while(t--)
    {
        scl(m);
        ans=binarySearch(a, 0,n-1,m);

        pfl(ans);
    }

    return 0;
}



