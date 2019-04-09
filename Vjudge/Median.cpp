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




#define pb(x) push_back(x)


int main()
{

    ll m,n,t,a,b,c,d,i,j,k,x,y,z;
    double ans,l;
    vector<ll>v;

            while(cin>>n)
            {
                if(n==0) { v.clear();  cout<<endl;}
                if(n==-1)
                {
                    l=v.size();
                    ans= ceil( l/2.0 );
                    //cout<<"ans = "<<ans<<endl;
                    pfl(v[ans-1]);
                    v.erase(v.begin() +ans-1);
                    for(i=0;i<v.size();i++)
                       // cout<<v[i]<<" ";
                    ans=0;
                }
                else
                    v.pb(n);
            }

    return 0;
}






