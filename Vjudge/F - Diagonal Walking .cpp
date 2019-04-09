
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)

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

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

int main()
{

ll i,m,n,a,d,e,cnt=0;
char s[200];
cin>>n;
for(i=0;i<n;i++)
{
    cin>>s[i];
}

for(i=0;i<n;i++ )
{
    if((s[i]=='U'&&s[i+1]=='R' )||( s[i]=='R'&&s[i+1]=='U')){  s[i+1]='D' ;  cnt++;}//cout<<i<<" " <<i+1<<endl;

}
//cout<<cnt<<endl;
d=n-cnt*2;
e=cnt+d;
cout<<e<<endl;

return 0;
}
