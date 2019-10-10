
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(i=a;i<b;i++)
#define repr(i,a,b) for(i=a;i>=b;i--)
#define LL long long
#define ull unsigned long long int
#define scl(n) scanf("%lld", &n)
#define scf(n) scanf("%lf", &n)
#define sci(n) scanf("%d", &n)
#define scii(n,m) scanf("%d %d",&n,&m)
#define sciii(n,m,p) scanf("%d %d %d",&n,&m,&p)
#define scs(n) scanf("%s", n)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a,b) memset(a,b,sizeof(a))
#define INF 1e31
#define EPS 1e-8
#define Pi acos(-1.0)
#define N 100005

int arr[N];
int ex[N];
int in[N];

int main()
{
    int n;
    sci(n);


    for(int i=1;i<=n;i++)
        sci(arr[i]);



    for(int i=1;i<=n;i++)
    {
        in[i]=arr[i]+ex[i-1];
        ex[i]=in[i-1];
    }


    cout<<"the maximum sum is : "<<max(in[n],ex[n])<<endl<<endl;

    cout<<"inclusion array is :\n";
    for(int i=1;i<=n;i++)
    {
        cout<<in[i] <<" ";
    }
    cout<<endl;


    cout<<"exclusion array is :\n";
    for(int i=1;i<=n;i++)
    {
        cout<<ex[i] <<" ";
    }



    return 0;
}
