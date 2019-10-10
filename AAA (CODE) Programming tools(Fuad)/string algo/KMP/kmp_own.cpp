

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
#define N 300005



int main()
{
    string str; /// given string where to search
    cin>>str;
    string pat;
    cin>>pat;

    int arr[pat.size()];


    int i=1,j=0;


    arr[0]=0;
    while(i<pat.size())
    {
        if(pat[i]==pat[j])
        {
            j++;
            arr[i]=j;
            i++;
        }
        else
        {
            if(j!=0)
            {
                j=arr[j-1];
            }
            else
            {
                arr[i]=0;
                i++;
            }


        }
    }
    cout<<pat<<endl;
    for(int i=0;i<pat.size();i++)
        cout<<arr[i];

    cout<<"\n\n*************************\n\n";

    j=0;
    int flag=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!=pat[j])
        {
            cout<<"gg"<<endl;
            if(j!=0)
            {
                j=arr[j-1];
                if(str[i]==str[j])
                    j++;
            }


        }
        else
        {
            cout<<"fff"<<endl;
            j++;
        }
        if(j==pat.size())
        {
            flag=1;
        }
    }

    if(flag)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;

    return 0;
}
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
