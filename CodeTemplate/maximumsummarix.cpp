#include <stdio.h>
#include <iostream>
#include <climits>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>
#include <stack>
#include <deque>
#include <vector>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <utility>
#include <queue>


using namespace std;

#define ll long long
#define ulli  unsigned ll int

#define sl(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define si(n) scanf("%d", &n)
#define ss(n) scanf("%s", n)
#define pii pair <int, int>
#define pll pair <ll, ll>
#define plp pair <int, pll >
#define pb push_back
#define mkpr  make_pair
#define   ff   first
#define   ss  second
#define  srt(V)  sort(V.begin(),V.end());
#define  PI  2*acos(0.0);
#define  INFP ( (ll)1<<62)
#define  INFN (0-(ll)1<<62)
#define  loop(a,b)  for(int g=a;g<=b;g++)
#define  for1(n)  for(int i=0;i<n;i++)
#define  for2(n)  for(int j=0;j<n;j++)
#define  for3(n)  for(int k=0;k<n;k++)
#define  for4(n)  for(int l=0;l<n;l++)
#define  tst(n)  for(int cs=1;cs<=n;cs++)

typedef pair<ll int,ll int> iPair;
vector<bool>visited(1000007,false);
vector<ll int >data;
vector<ll int >info;
ll  int Arr[101][101];

ll  int cmsum[101][101];



int main()
{

    ll int a,b,p,q,r,s,n,m,x,y,sum,ans,mx,mn;
    int cnt,z,c;
    bool ys,no;

    string  A,B;
    ll int mxar[1000];
    while(cin>>n)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                sl(Arr[i][j]);

        }

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cmsum[i][j]=cmsum[i][j-1]+Arr[i][j];
            }
        }
        ans=INFN;
        for1(n)
        {
            for(int j=i+1; j<=n; j++)
            {
                for(int k=1; k<=n; k++)
                {
                    p=cmsum[k][j]-cmsum[k][i-1];

                    mxar[k]=max(mxar[k-1]+p,p);
                }
                mx=INFN;
                for(int k=1; k<=n; k++)
                {
                    mx=max(mxar[k],mx);
                }

            }
            ans=max(ans,mx);

        }

        cout<<ans<<endl;
    }

    //f
}


