
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

    string s,s1,s2,x,temp;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        x="http://www.lightoj.com/";
        stack<string>st1;
        stack<string>st2;
        st1.push(x);

        printf("Case %d:\n",i);
        while(cin>>s)
        {
            if(s=="QUIT")
                break;

            if(s=="VISIT")
            {
                cin>>s1;
                cout<<s1<<endl;
                st1.push(s1);

                if(!st2.empty())
                {
                    while(!st2.empty())
                        st2.pop();
                }
            }
            else
            {
                if(s=="BACK")
                {
                    temp=st1.top();
                    st2.push(temp);
                    st1.pop();
                    if(!st1.empty())
                    {
                        cout<<st1.top()<<endl;
                    }

                else
                {
                    cout<<"Ignored"<<endl;
                    temp=st2.top();
                    st1.push(temp);
                    st2.pop();

                }
                }

                if(s=="FORWARD")
                {
                    if(!st2.empty())
                    {
                        cout<<st2.top()<<endl;
                        temp=st2.top();
                        st1.push(temp);
                        st2.pop();
                    }
                    else
                        cout<<"Ignored"<<endl;
                }
            }
        }
    }
    return 0;
}
