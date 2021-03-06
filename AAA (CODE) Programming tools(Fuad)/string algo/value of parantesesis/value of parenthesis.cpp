
//()  -> 1
//()() ->1+1
//(()) ->2*1

#include<bits/stdc++.h>
using namespace std;

#define LL                  long long
#define ull                 unsigned long long LL
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define sci(n)              scanf("%d", &n)
#define scii(n,m)           scanf("%d %d",&n,&m)
#define sciii(n,m,p)        scanf("%d %d %d",&n,&m,&p)

#define MOD                 1000000007
#define MODP                99999999999973LL
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define memo(a,b)           memset(a,b,sizeof(a))
#define INF                 1e9
#define EPS                 1e-8
#define Pi                  acos(-1.0)

#define N 200005

string str;

int Map[N];


int solve(int lo,int hi)
{
    if(hi==lo+1)
        return 1;
    if(Map[lo]==hi)
        return 2*solve(lo+1,hi-1);
    else
        return solve(lo,Map[lo])+solve(Map[lo]+1,hi);
}



int main()
{

    cin>>str;


    stack<int>stk;
    memo(Map,-1);


    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
            stk.push(i);
        else
        {
            int tem=stk.top();
            stk.pop();
            Map[tem]=i;
        }
    }

//    for(int i=0;i<str.size();i++)
//    {
//        if(str[i]=='(')
//            cout<<i<<" "<<Map[i]<<endl;
//    }


    int res=solve(0,str.size()-1);
    cout<<res<<endl;

    return 0;
}

/* LL dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* LL dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* LL dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* LL dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
