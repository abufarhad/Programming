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
#define sl2(a,b) scanf("%lld%lld", &a,&b)
#define sl3(a,b,c) scanf("%lld%lld%lld", &a,&b,&c)
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
#define nl printf("\n");

#define  PI  2*acos(0.0);
#define  INFP ( (ll)1<<62)
#define  INFN (0-(ll)1<<62)
#define  loop(a,b)  for(int g=a;g<=b;g++)
#define  for1(n)  for(int i=0;i<n;i++)
#define  for2(n)  for(int j=0;j<n;j++)
#define  for3(n)  for(int k=0;k<n;k++)
#define  for4(n)  for(int l=0;l<n;l++)
#define  tst(n)  for(int cs=1;cs<=n;cs++)
#define spc <<" "<<
typedef pair<ll int,ll int> iPair;


void grahamscan(ll x,ll y)
{







}

iPair leftmost;
bool operator <(iPair A,iPair B)
{
    ll x=leftmost.ff;
    ll y=leftmost.ss;

    ll x1=A.first;
    ll y1=A.second;

    ll x2=B.first;
    ll y2=B.second;


    double m1=(y1-y)/(x1-x);
    double m2=(y2-y)/(x2-x);

    return m1<m2;


}



vector<iPair>pos;

int main()
{
    ll n,x,y,x1,y1=100000;;
    cin>>n;


    for(int i=0; i<n; i++)
    {


        sl(x);
        sl(y);
        pos.pb(mkpr(x,y));
        if(y1>y)
        {

            y1=y;
            x1=x;
        }

    }
    leftmost.ff=x1;
    leftmost.ss=y1;


    sort(pos.begin(),pos.end());

    for(auto it :pos)
    {

        cout<<it.ff<<" "<<it.ss<<endl;
    }





    //f
}

