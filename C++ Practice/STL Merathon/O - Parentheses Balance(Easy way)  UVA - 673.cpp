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

#define file_read(filename)  freopen("input.txt","r",stdin);
#define file_write(filename)  freopen("output.txt","w",stdout);

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

int main()
{
    ll m,n,i,k,j,l;
    string  c;
    cin>>n;
    getline(cin,c);
    while(n--)
    {
        stack<char> s;
       getline(cin,c);
      // cin>>c;

        l=c.size();
        for(i=0; i<l; i++)
        {
            if(! s.empty() && c[i]== ']' && s.top() =='[')
            {
                s.pop();
            }
            else  if(!s.empty() && c[i]==')' && s.top()=='(')
            {
                s.pop();
            }
            else s.push(c[i]);
        }
        if(s.empty())
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;


    }
    return 0;
}
