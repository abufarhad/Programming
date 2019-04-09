
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


bool cmp(char opening ,char closing )
{
    if(opening=='('&& closing==')') return true;
    else if(opening=='['&& closing==']') return true;
    else if(opening=='{'&& closing=='}') return true;
    else return false;
}

bool isbalance( string c)
{
    stack<char> s;
    int len=c.size();
    for(int i=0;i<len;i++)
    {
        if(c[i]=='['||c[i]=='('||c[i]=='{') s.push(c[i]);
        else if(c[i]==']'||c[i]==')'||c[i]=='}')
        {
            if(s.empty() || !cmp(s.top(),c[i] ))  return false;
            else s.pop();
        }
    }
    return s.empty()? true:false;
    }

int main()
{
    ll m,n,i,k,j,l,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    string  c;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c;
        if(isbalance(c)==false)
        {
            cout<<"No"<<endl;
        }
        else
            cout<<"Yes"<<endl;

    }
return 0;
}
