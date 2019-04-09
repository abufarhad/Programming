#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

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
map<string,string>mp;
int main()
{
    ll m,n,i;
    string s,s1,s2;
    cin>>n;
    getchar();

    while(n--)
    {
        getline(cin,s);
        getline(cin,s1);
        mp[s]=s1;
    }

    cin>>m;
    getchar();
    while(m--)
    {
        getline(cin,s2);
        cout<<mp[s2]<<endl;
    }
    mp.clear();

    return 0;
}
