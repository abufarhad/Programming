

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld\n",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})


ll calculate(ll hist[ ],ll n)
{
    stack<ll>s;
    ll i=0,max_area=0,tp, area;


    while(i<n)
    {
        if(s.empty() || hist[s.top()]<hist[i])
        {
            s.push(i++);
        }
        else
        {
            tp=s.top();
            s.pop();
            if(s.empty())
            {
                area=hist[tp]*i;
            }
            else
                area=hist[tp]*(i-s.top()-1);

            max_area=max(max_area,area);
        }
    }
    // cout<<i<<endl;

    while(!s.empty())
    {
        tp=s.top();
        s.pop();
        if(s.empty())
        {
            area=hist[tp]*i;
        }
        else
            area=hist[tp]*(i-s.top()-1);

        max_area=max(max_area,area);
    }

    return max_area;
}



int main()
{

    ll  m,n,t,b,c,d,i=0,j,k,x,y,z,ans,sum=0;
    scl(n);
    ll  hist[n];

    for(i=0; i<n; i++)
    {
        cin>>hist[i];
    }
    cout<<calculate( hist,n);

}





