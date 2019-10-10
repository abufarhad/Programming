
#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(i=a;i<b;i++)
#define repr(i,a,b) for(i=a;i>=b;i--)
#define LL long long
#define ull unsigned long long
#define scl(n) scanf("%lld", &n)
#define scf(n) scanf("%lf", &n)
#define sci(n) scanf("%d", &n)
#define scii(n,m) scanf("%d %d",&n,&m)
#define sciii(n,m,p) scanf("%d %d %d",&n,&m,&p)
#define scs(n) scanf("%s", n)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a,b) memset(a,b,sizeof(a))
#define INF 1e9
#define EPS 1e-8
#define Pi acos(-1.0)
#define MAX 100009


stack<int>st;
void rev(){

    int tem=st.top();
    st.pop();
    if(st.size()==0)
        return ;
    st.push(tem);

}

int main()
{
    int n;
    cin>>n;

    stack<int>st;

    for(int i=0;i<n;i++)
    {
        int tem;
        cin>>tem;
        st.push(tem);

    }

    rev();

    while(st.size())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}


/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
