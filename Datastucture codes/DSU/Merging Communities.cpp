//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define N 100006


int parent[N];
int r[N];


int find(int i)
{
    if(parent[i] == i)
        return i;
    return parent[i] = find(parent[i]);
}

void join(int i, int j)
{
    i = find(i), j = find(j);
    if(r[i] < r[j])   swap(i,j);

    parent[j] = i;
    r[i] += r[j];
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q;
    cin>>n>>q;
    for(int i =0 ; i<=n; i++)
    {
        parent[i]=i;
        r[i]=1;
    }
    int a,b;
    char c;
    for(int i = 0; i < q; i++)
    {
        cin>>c;
        if(c=='Q')
        {
            cin>>a;
            cout<<r[find(a)]<<endl;
        }
        else
        {
            cin>>a>>b;
            if(find(a)!=find(b))
            {
                join(a,b);
            }
        }
    }
    return 0;
}


