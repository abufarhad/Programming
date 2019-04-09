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
//typedef pair<int,int> iPair;

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
#define  loop(a,b)  for(int g=a;g<=b;g++)
#define  for1(n)  for(int i=0;i<n;i++)
#define  for2(n)  for(int j=0;j<n;j++)
#define  for3(n)  for(int k=0;k<n;k++)
#define  for4(n)  for(int l=0;l<n;l++)
#define  tst(n)  for(int cs=1;cs<=n;cs++)

vector<bool>visited(1000007,false);
vector<ll int >data;
vector<ll int >info;
ll int cmsum[10000007];



ll int x,y;

void  extend_Euclid(ll int a,ll int b){


if(b==0){

    x=a;y=0;
    return ;
}
extend_Euclid(b,a%b);
ll int x1=y;
ll int y1=x-(a/b)*y;
x=x1;
y=y1;


}



int main(){

ll int a,b,p,q,r,s,n,m,test,sum,ans,mx,mn;
//int cnt,z,c;
//bool ys,no;

//string  A,B;
cin>>test;


tst(test){

sl(a);
sl(b);
if(b==1){
    cout<<b<<endl;
}

else if(__gcd(a,b)==1){


extend_Euclid(a,b);
ll  int res=x;
if(res<0){


    res+=b;
}

cout<<res<<endl;

}
else{

    cout<<"-1\n";
}




}

    //f
}

