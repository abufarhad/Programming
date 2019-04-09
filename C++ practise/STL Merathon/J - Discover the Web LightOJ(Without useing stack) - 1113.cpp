
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

int main()
{
    ll n,m,i;
    cin>>n;
    string s,s1,x,temp;
    string browser[150];

    for(i=1; i<=n; i++)
    {
        int last=0,ind=0;
        printf("Case %d:\n",i);
        browser[last]= "http://www.lightoj.com/";

        while(cin>>s)
        {
            if(s=="QUIT") break;
            if(s=="VISIT")
            {
                cin>>s1;
                cout<<s1<<endl;
                browser[++ind]=s1;
                last=ind;
            }

            if(s=="BACK")
            {
                if(ind-1 <0)  cout<<"Ignored"<<endl;
                else cout<<browser[--ind]<<endl;
            }

            if(s=="FORWARD")
            {
                if(ind+1>last) cout<<"Ignored"<<endl;
                else    cout<<browser[++ind]<<endl;
            }
        }
    }
    return 0;
}
