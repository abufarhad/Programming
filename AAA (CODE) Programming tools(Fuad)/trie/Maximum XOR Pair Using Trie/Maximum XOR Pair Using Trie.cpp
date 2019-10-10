///https://www.youtube.com/watch?v=jCu-Pd0IjIA
///coding blocks
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

struct node
{
    node *left;
    node *right;
};

void insert_value(node * head,int value)
{
    node *curr=head;

    for(int i=31;i>=0;i--)
    {
        int b=(value>>i)&1;

        if(b==0)
        {
            if(curr->left)
            {
                curr=curr->left;
            }
            else
            {
                curr->left=new node();
                curr=curr->left;
            }
        }
        else if(b==1)
        {
            if(curr->right)
            {
                curr=curr->right;
            }
            else
            {
                curr->right=new node();
                curr=curr->right;
            }
        }

    }

}


int max_pair_value(node * head,int *arr,int n)
{
    int res=INT_MIN;

    for(int i=0;i<n;i++)
    {
        int tem=0;
        node *curr=head;

        for(int j=31;j>=0;j--)
        {
                 int b=(arr[i]>>j)&1;

                 if(b==0)
                 {
                     if(curr->right)
                     {
                         tem+=pow(2,j);
                         curr=curr->right;
                     }
                     else
                     {
                         curr=curr->left;
                     }
                 }
                 else if(b==1)
                 {
                    if(curr->left)
                    {
                        tem+=pow(2,j);
                        curr=curr->left;
                    }
                    else
                    {
                        curr=curr->right;
                    }
                 }
        }

        res=max(res,tem);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;

    int arr[100];
    node *head=new node();
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        insert_value(head,arr[i]);
    }




    cout<<max_pair_value(head,arr,n)<<endl;


    return 0;
}
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
