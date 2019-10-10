//#include<bits/stdc++.h>
//#define mx 100005
//#define scl(n)              scanf("%d", &n)
//using namespace std;
//int tree[mx*3];
//void build_tree(int node,int b,int e)
//{
//    if(b==e)
//    {
//        tree[node]=0;
//        return;
//    }
//    int left=2*node;
//    int right=2*node+1;
//    int mid=(b+e)/2;
//    build_tree(left,b,mid);
//    build_tree(right,mid+1,e);
//    tree[node]=0;
//}
//
//
//void update(int node,int b,int e,int i,int j)
//{
//    if(j<b || i>e)
//        return ;
//    if(i<=b && j>=e)
//    {
//        tree[node]++;
//        return ;
//    }
//    int left=2*node;
//    int right=2*node+1;
//    int mid=(b+e)/2;
//    update(left,b,mid,i,j);
//    update(right,mid+1,e,i,j);
//}
//
//
//int query(int node,int b,int e, int i)
//{
//    if(i<b || i > e)
//        return 0;
//    if(i==b && i==e)
//        return tree[node];
//    int left=2*node;
//    int right=2*node+1;
//    int mid=(b+e)/2;
//    if(i<=mid)
//        return tree[node]+query(left,b,mid,i);
//    else
//        return tree[node]+query(right,mid+1,e,i);
//}
//
//
//int main()
//{
//    int n,t,x,y,ans;
//    char s[mx];
//    char ch;
//    scanf("%d",&n);
//    getchar();
//    for(int i=1; i<=n; i++)
//    {
//        memset(tree,0,mx*3);
//        //cin>>s;
//        scanf("%s",&s);
//        int ln=strlen(s);
//        //int ln=s.size();
//        build_tree(1,1,ln);
//        printf("Case %d:\n",i);
//        scl(t);
//        getchar();
//        for(int j=1; j<=t; j++)
//        {
//            scanf("%c",&ch);
//            getchar();
//            if(ch=='I')
//            {
//                scl(x), scl(y);
//                update(1,1,ln,x,y);
//                getchar();
//            }
//            else
//            {
//               scl(x);
//                int ans=query(1,1,ln,x);
//                getchar();
//                if(ans%2==0)
//                    printf("%d\n",s[x-1]-'0');
//                else
//                    printf("%d\n",(s[x-1]-'0')^1);
//            }
//        }
//    }
//    return 0;
//}

#include <bits/stdc++.h>

#define pii             pair <int,int>
#define sc              scanf
#define pf              printf
#define Pi              2*acos(0.0)
#define ms(a,b)         memset(a, b, sizeof(a))
#define pb(a)           push_back(a)
#define MP              make_pair
#define db              double
#define ll              long long
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define D(x)            cout<<#x " = "<<(x)<<endl
#define VI              vector <int>
#define DBG             pf("Hi\n")
#define MOD             100007
#define MAX             100010
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
#define SZ(a)           (int)a.size()
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define loop(i,n)       for(int i=0;i<n;i++)
#define REP(i,a,b)      for(int i=a;i<b;i++)
#define TEST_CASE(t)    for(int z=1;z<=t;z++)
#define PRINT_CASE      printf("Case %d:\n",z)
#define all(a)          a.begin(),a.end()
#define intlim          2147483648
#define inf             1000000
#define ull             unsigned long long

using namespace std;

int tree[3*MAX];
char str[MAX];
int n,m;

void init_and_update(int node, int b, int e, int i, int j)
{
    if(b>=i && e<=j)
    {
        tree[node]++;
        return;
    }

    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;

    if(j<=mid)
        init_and_update(left,b,mid,i,j);
    else if(i>mid)
        init_and_update(right,mid+1,e,i,j);
    else
    {
        init_and_update(left,b,mid,i,mid);
        init_and_update(right,mid+1,e,mid+1,j);
    }
}

int query(int node, int b, int e, int target)
{
    if(b==target && e==target)
    {
        return tree[node];
    }

    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;

    if(target<=mid)
        return tree[node]+query(left,b,mid,target);
    else
        return tree[node]+query(right,mid+1,e,target);

}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t;
    sf(t);

    TEST_CASE(t)
    {
        ms(tree,0);
        sc("%s",str);
        sf(m);
        n=strlen(str);
        loop(i,n)
            if(str[i]=='1')
            init_and_update(1,1,n,i+1,i+1);

        PRINT_CASE;
        while(m--)
        {
            getchar();
            char ch;
            sc("%c",&ch);
            if(ch=='I')
            {
                int a,b;
                sff(a,b);
                init_and_update(1,1,n,a,b);
            }
            else
            {
                int a;
                sf(a);
                pf("%d\n",query(1,1,n,a)%2);
            }
        }
    }
    return 0;
}
