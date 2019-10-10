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

#define pb                  push_back
#define ff                  first
#define ss                  second
#define mp                  make_pair
#define pp                  pair<int,int>
#define memo(a,b)           memset(a,b,sizeof(a))
#define INF                 1e9
#define EPS                 1e-8
#define Pi                  acos(-1.0)

#define N 100005
int arr[N];
int blk_siz;
int block[1000]; /// actual no of block sqrt(n)

void preprocess(int n)
{
    int blk_num=-1;

    for(int i=0;i<n;i++)
    {
        if(i%blk_siz==0)
        {
            blk_num++;
        }
        block[ blk_num ]+=arr[i];

    }


}

void update(int pos,int val)
{
    block[ pos/blk_siz ]= block[ pos/blk_siz ]+val-arr[pos];

    arr[pos]=val;
}


int query(int l,int r,int n)
{
    int sum=0;

    while(l<r && l%blk_siz!=0 && l!=0)
    {
        sum+=arr[l];
        l++;

    }

    while(l+blk_siz<=r)
    {
        sum+=block[ l/blk_siz ];
        l+=blk_siz;

    }

    while(l<=r)
    {
        sum+=arr[l];
        l++;
    }

    return sum;
}



int main()
{

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    blk_siz=sqrt(n); /// size of the block

    preprocess(n);

    while(1)
    {
        int choice;
        cin>>choice;


        if(choice==1) /// query 0 based indexing
        {
            int l,r;
            cin>>l>>r;

            int x=query(l,r,n);
            cout<<"sum in "<<l<<" to "<<r<<" is : "<<x<<endl;
        }
        else /// update 0 based indexing
        {
            int pos,val;
            cin>>pos>>val;
            update(pos,val);
        }
    }






}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
