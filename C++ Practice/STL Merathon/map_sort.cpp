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
   pair<char,int>p;
   map<char,int>m;

   for(char c='a';c<='z';c++)
   {
       p.first=c;
       p.second=(int)c;

       m.insert(p);
   }
   map<char,int>::iterator it;
   for(it=m.begin();it!=m.end();it++)
   {
       cout<<(*it).first<<" "<<(*it).second<<endl;
   }

   cout<<"Finding specific value"<<endl;

   it=m.find('j');
   cout<<(*it).first<<" "<<(*it).second<<endl;

return 0;
}
