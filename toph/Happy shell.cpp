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
#define limit  2367362131
#define  pno  puts("NO");
#define  pys puts("0");

#define  pmn puts("-1");
#define  bug puts("bug");
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
/* LL dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* LL dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* LL dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
typedef pair<ll,ll> iPair;

string X,Y;
//ll cmsum[100001][55];
ll  hass1r[100001];
ll  hass1[100001];
ll  hass2r[100001];
ll  hass2[100001];
ll ppw[100003];


ll int x,y;

bool check[100005];

void  extend_Euclid(ll int a,ll int b)
{
    if(b==0)
    {

        x=a;
        y=0;
        return ;
    }
    extend_Euclid(b,a%b);
    ll int x1=y;
    ll int y1=x-(a/b)*y;
    x=x1;
    y=y1;

}

ll pow(ll x,ll y)
{
    if(y==0)return 1;

    if(y==1) return x;

    ll p=pow(x,y/2)%limit;

    if(y%2==0)
    {
        return (p*p)%limit;
    }
    else
    {
        return (p*(p*x%limit)%limit)%limit;
    }

}

ll  solve(ll xx,ll yy)
{

    ll ans=pow(xx,yy)%limit;

    extend_Euclid(ans,limit);

    x+=limit;

    x%=limit;


    return x;


}

int main()
{

    while(cin>>X>>Y)
    {
        ll val=1000004497;


        ll pw=1;
        for(ll i=1; i<=X.size(); i++)
        {

            pw*=val;
            pw%=limit;

            hass1[i]=hass1[i-1]+((X[i-1]-'a'+1)*pw)%limit;

            hass1[i]%=limit;

            //cout<<hass1[i]<<endl;

            //cout<<hass[i]<<" "<<pw<<endl;
        }



        for(ll i=0; i<=100001; i++)  ppw[i]=solve(val,i);

        //bug


        pw=1;
        for(ll i=X.size(); i>=1; i--)
        {

            pw*=val;
            pw%=limit;

            hass1r[i]=hass1r[i+1]+((X[i-1]-'a'+1)*pw)%limit;

            hass1r[i]%=limit;

            //cout<<hass1r[i]<<endl;
        }
        //bug

        pw=1;
        for(ll i=1; i<=Y.size(); i++)
        {

            pw*=val;
            pw%=limit;

            hass2[i]=hass2[i-1]+((Y[i-1]-'a'+1)*pw)%limit;

            hass2[i]%=limit;

            //cout<<hass2[i]<<endl;
        }

        //bug
        pw=1;
        for(ll i=Y.size(); i>=1; i--)
        {

            pw*=val;
            pw%=limit;

            hass2r[i]=hass2r[i+1]+((Y[i-1]-'a'+1)*pw)%limit;

            hass2r[i]%=limit;


            //cout<<hass2r[i]<<endl;
            //cout<<hass[i]<<" "<<pw<<endl;

        }

        ll l=0,h=min(X.size(),Y.size());



        while(l<h)
        {

            ll m=(l+h+1)/2,mid=m+1;
            map<ll,bool>mp;

            bool  ys=0;

            for(ll i=1; i<=X.size()-m+1; i++)
            {
                ll p=hass1[i+m-1]-hass1[i-1]+limit;
                p%=limit;
                ll pp= ppw[i-1];

                p*=pp;
                p%=limit;


                ll q=hass1r[i]-hass1r[i+m]+limit;


                q%=limit;
                ll c=X.size()-(i+m-1)+1;

                pp=ppw[c-1];
//pow(val,c-1)%limit;



                q*=pp;
                q%=limit;
//cout<<p<<" "<<q<<endl;
                if(p==q)
                {
                    mp[p]=true;
                }

            }


            for(ll i=1; i<=Y.size()-m+1; i++)
            {

                ll p=(hass2[i+m-1]-hass2[i-1]+limit)%limit;

                ll pp=ppw[i-1];

                p*=pp;
                p%=limit;

                ll q=hass2r[i]-hass2r[i+m]+limit;
                q%=limit;

                ll cc=Y.size()-(m+i-1)+1;

                pp=ppw[cc-1];

                q*=pp;

                q%=limit;
//cout<<p<<" "<<q<<endl;
                if(p==q)
                {
                    if(mp[p])
                    {
                        ys=true;
                        break;

                    }}}
            map<ll,bool>mp1;

            bool  ys1=0;
//cout<<m<<endl;
            m=mid;
            for(ll i=1; i<=X.size()-m+1; i++)
            {


                ll p=hass1[i+m-1]-hass1[i-1]+limit;
                p%=limit;
                ll pp=ppw[i-1];

                p*=pp;
                p%=limit;


                ll q=hass1r[i]-hass1r[i+m]+limit;


                q%=limit;
                ll c=X.size()-(i+m-1)+1;

                pp=ppw[c-1];



                q*=pp;
                q%=limit;
//cout<<p<<" "<<q<<endl;
                if(p==q)
                {
                    mp1[p]=true;
                }
            }

            for(ll i=1; i<=Y.size()-m+1; i++)
            {

                ll p=(hass2[i+m-1]-hass2[i-1]+limit)%limit;

                ll pp=ppw[i-1];


                p*=pp;
                p%=limit;
                ll q=hass2r[i]-hass2r[i+m]+limit;
                q%=limit;

                ll cc=Y.size()-(m+i-1)+1;

                pp=ppw[cc-1];

                q*=pp;

                q%=limit;
//cout<<p<<" "<<q<<endl;
                if(p==q)
                {
                    if(mp1[p])
                    {
                        ys=true;
                        break;
                    }}}
            if(ys1)
            {

                l=mid;


            }
            else if(ys)
            {


                l=mid-1;
            }
            else
            {

                h=mid-2;
            }

            //cout<<l<<endl;

            if(check[mid])
                break;
            check[mid]=true;
        }

        cout<<l<<endl;

    }}
