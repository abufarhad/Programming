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




#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)


int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,ans;
    scl(t);

    string s,s1;
    cin>>s;
    ll cursour=s.size();

    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cin>>s1;
            if(s1[0] !=92 && s1[1] !='b' )
            {
                s.insert(cursour, s1);
                cursour++;
            }
            else
            {
                if(cursour !=0)
                {
                    s.erase(s.begin()+(cursour-1));
                    cursour--;

                }
                else
                    continue;
            }
        }
        else if(n==2)
        {
            cin>>x;
            cursour=x;
        }

    }
    cout<<s<<endl;

    return 0;
}





