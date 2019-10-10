

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

#define N 100005

int arr[N];


int marging(int arr[],int l,int mid,int r)
{
    int in=0;
    int p=l;
    int left_ele=mid-l+1;
    int right_ele=r-mid;

    int left[left_ele];
    int right[right_ele];

    for(int i=0;i<left_ele;i++)
    {
        left[i]=arr[l+i];
    }
    for(int i=0;i<right_ele;i++)
    {
        right[i]=arr[mid+1+i];
    }

    int i=0,j=0;


    while(i<left_ele && j<right_ele)
    {
        if(left[i]<=right[j])
            arr[p++]=left[i++];
        else
        {
            in+=(left_ele-i);
            arr[p++]=right[j++];
        }


    }

    while(i<left_ele)
        arr[p++]=left[i++];

    while(j<right_ele)
        arr[p++]=right[j++];


    return in;
}


int merge_sort(int arr[],int l,int r)
{

    int in=0;

    if(l<r)
    {

        int mid=(l+r)/2;

        in= merge_sort(arr,l,mid);
        in+= merge_sort(arr,mid+1,r);

        in+= marging(arr,l,mid,r);


    }

    return in;


}

int main()
{

    int n;
    sci(n);

    for(int i=0;i<n;i++)
        sci(arr[i]);

    cout<<"inversion count : "<<merge_sort(arr,0,n-1)<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
