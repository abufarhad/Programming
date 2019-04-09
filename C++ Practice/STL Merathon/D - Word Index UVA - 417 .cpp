
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

map<string,int>mp;
ll pos=1;

void create_map(string s, int n)
{
    //cout<<pos<<" "<<s<<" "<<mp[s]<<endl;
    if(s.size()==n)
    {
        mp[s]=pos++;
        return;

    }

    char last;
   if(s == "")
    {
        last = 'a';
    }
    else
    {
        last=s[s.size()-1]+1;

    }
    for(char i=last; i<='z'; i++)
    {
        create_map(s+i,n);
    }
}

int main()
{
    ll m,n,i;
    string str;


    for(i=1; i<6; i++)
    {
        create_map("",i);
    }

     while(cin>>str)
    {
        printf("%d\n", mp[str]);
    }

    return 0;
}
