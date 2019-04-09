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
#define ulli unsigned  ll int
#define sl(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define si(n) scanf("%d", &n)
#define ss(n) scanf("%s", n)
#define pii pair <int, int>
#define pll pair <ll, ll>
#define plp pair <int, pll >
#define pb push_back
#define  loop(a,b)  for(int g=a;g<=b;g++)
#define  for1(n)  for(int i=0;i<n;i++)
#define  for2(n)  for(int j=0;j<n;j++)
#define  for3(n)  for(int k=0;k<n;k++)
#define  for4(n)  for(int l=0;l<n;l++)
#define  tst(n)  for(int cs=1;cs<=n;cs++)

vector<bool>visited(1000007,false);
vector<ll int >data;
vector<ulli >info;
ulli cumsum[10000007];
int main(){

ll int a,b,p,q,r,s,n,m,x,y,sum,t,ans,mn;
int cnt,z,c;
ulli mod;
bool ys,no;

string  A,B;
cin>>t;
tst(t){
cin>>n>>mod;

        for1(n){

        sl(a);
        info.pb(a);

        }


for1(n){
    if(i==0){

        cumsum[i]=info[i]%mod;
    }
    else{
    cumsum[i]=max((cumsum[i-1]%mod+info[i]%mod)%mod,info[i]%mod);
    cumsum[i]%=mod;

    }



}
ulli mx=0;

for1(n){
    //cout<<cumsum[i]<<endl;


if(cumsum[i]>mx){

    mx=cumsum[i];
}
}

cout<<mx%mod<<endl;
info.clear();
  }

    //f
}

