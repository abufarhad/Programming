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

#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)

#define file_read(filename)  freopen("input.txt","r",stdin);
#define file_write(filename)  freopen("output.txt","w",stdout);

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

void nextPermutation(vector<int>& nums)
{
    int n = nums.size(), i, j;
    for (i = n - 1; i > 0; --i)
    {
        if (nums[i - 1] < nums[i]) break;
    }
    if (i == 0)
    {
        reverse(nums.begin(), nums.end());
        return;
    }
    for (j = n - 1; j >= 0; --j)
    {
        if (nums[j] > nums[i - 1]) break;
    }
    swap(nums[i - 1], nums[j]);
    reverse(nums.begin() + i, nums.end());
}

int main()
{
    ll t,n,test=1,i;
    vector<int> v;
    scl(t);
    for(ll m=1; m<=t; m++)
    {
        scanf("%lld",&n);
        v.clear();

        while(n>=2)
        {
            v.push_back(n%2);
            n/=2;
        }
        v.push_back(n);
        v.push_back(0);

        reverse(v.begin(),v.end());

        //nextPermutation(v);
          next_permutation(v.begin(),v.end());

        ll ans=0,pos=0;
        for(i=v.size()-1; i>=0; i--)
        {
            if(v[i]%2!=0)
                ans = ans|(1LL<< pos);
            pos++;
        }
        printf("Case %lld: %lld\n",m,ans);
    }
    return 0;
}
