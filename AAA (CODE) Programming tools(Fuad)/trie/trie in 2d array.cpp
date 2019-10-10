
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b)          for(i=a;i<b;i++)
#define repr(i,a,b)         for(i=a;i>=b;i--)

#define LL                  long long
#define ull                 unsigned long long int
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define sci(n)              scanf("%d", &n)
#define scii(n,m)           scanf("%d %d",&n,&m)
#define sciii(n,m,p)        scanf("%d %d %d",&n,&m,&p)
#define scs(n)              scanf("%s", n)
#define pfi(n)              printf("%d\n",n)
#define pfl(n)              printf("%I64d ",n)
#define pfs(s)              printf("%s\n",s)

#define MOD                 1000000007
#define MODP                99999999999973LL
#define pb                  push_back
#define ff                  first
#define ss                  second
#define mp                  make_pair
#define pp                  pair<int,int>
#define memo(a,b)           memset(a,b,sizeof(a))
#define INF                 1e9
#define EPS                 1e-8
#define Pi                  acos(-1.0)

#define N 1000
vector<int>v;


int trie[N*N][26];
bool mark[N*N][26];


int main()
{

    int n;
    sci(n);

    string str;

    int id=1;

    for(int i=0;i<n;i++)
    {
        cout<<"insert : ";
        cin>>str;

        int row=1;

        int col;
        for(int j=0;j<str.size();j++)
        {
            col=str[j]-'a';

            if(trie[row][col]==0)
            {
                id++;
                trie[row][col]=id;

            }
            row=trie[row][col];


        }
        mark[row][col]=true;



    }
    int q;
    sci(q);
    while(q--){

        string s;
        cout<<"Search : ";
        cin>>s;

        int row=1;
        int flag=1;
        int col;
        for(int i=0;i<s.size();i++)
        {
            col=s[i]-'a';
            if(trie[row][col]==0)
            {
                flag=0;
                break;
            }
            else
            {
                row=trie[row][col];
            }

        }

        if(mark[row][col]==true && flag)
            cout<<"found\n";
        else
            cout<<"not found\n";
    }



    return 0;
}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
