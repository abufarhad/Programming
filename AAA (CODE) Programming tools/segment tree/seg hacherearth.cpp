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
#define bug1		        printf("bug1")
#define	bug2			    printf("bug2")
#define	bug3		        printf("bug3")

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

#define N 4000005

LL lazy[N];
LL tree[N];

void updateRange(int node, int start, int end, int l, int r, LL val)
{
    if(lazy[node] != 0)
    {
        // This node needs to be updated
        tree[node] = (end - start + 1) - tree[node];    // Update it
        if(start != end)
        {
            lazy[node*2] =! lazy[node*2];                  // Mark child as lazy
            lazy[node*2+1] =! lazy[node*2+1];                // Mark child as lazy
        }
        lazy[node] = 0;                                  // Reset it
    }

    if(start > end or start > r or end < l)              // Current segment is not within range [l, r]
        return;
    if(start >= l and end <= r)
    {
        // Segment is fully within range
        tree[node] = (end - start + 1)  -tree[node];
        if(start != end)
        {
            // Not leaf node
            lazy[node*2] =! lazy[node*2];                  // Mark child as lazy
            lazy[node*2+1] =! lazy[node*2+1];
        }
        return;
    }
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val);        // Updating left child
    updateRange(node*2 + 1, mid + 1, end, l, r, val);   // Updating right child
    tree[node] = tree[node*2] + tree[node*2+1];        // Updating root with max value
}

LL queryRange(int node, int start, int end, int l, int r)
{
    if(start > end or start > r or end < l)
        return 0;         // Out of range
    if(lazy[node] != 0)
    {
        // This node needs to be updated
        tree[node] = (end - start + 1) - tree[node];            // Update it
        if(start != end)
        {
            lazy[node*2] = !lazy[node*2];         // Mark child as lazy
            lazy[node*2+1] = !lazy[node*2+1];    // Mark child as lazy
        }
        lazy[node] = 0;                 // Reset it
    }
    if(start >= l and end <= r)             // Current segment is totally within range [l, r]
        return tree[node];
    int mid = (start + end) / 2;
    LL p1 = queryRange(node*2, start, mid, l, r);         // Query left child
    LL p2 = queryRange(node*2 + 1, mid + 1, end, l, r); // Query right child
    return (p1 + p2);
}


int main()
{
    int T;
    sci(T);


    while(T--)
    {
        int n,c;
        scii(n,c);

        memo(tree,0);
        memo(lazy,0);

        while(c--)
        {
            int typ;
            sci(typ);

            if(typ==0)
            {
                int a,b;
                LL c;
                scii(a,b);
                scl(c);

                updateRange(1,1,n,a,b,c);
            }
            else
            {
                int a,b;
                scii(a,b);
                LL res=queryRange(1,1,n,a,b);

                printf("%lld\n",res);
            }
        }



    }


    return 0;
}
