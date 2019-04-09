#include<bits/stdc++.h>
using namespace std;
#define ll long long
int SieveOfEratosthenes(long long int n)
{
    int cnt=2,count=0,i;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {

            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
   int a[100000];
    for(int m=1;m<=n;m++){ a[m]=0; }

    for (int p=2; p<=n; p++)
       if (prime[p]==true)
          p=a[i];  cnt++;

        for (int k=2; k<cnt; k++)
        if(prime[k]+prime[cnt]==n)
            count++;
        }

int main()
{
ll n,i,t,j,cnt; cin>>t;
for( int j = 1; j <=t; j++ ){  cin>>n;  cnt=0;

if(SieveOfEratosthenes(n)){  cnt++;//cout<<endl<<i<<" " <<n-i; return 0;
printf("%d %d\n",i,n-i);  }}
cout<<"Case "<<j<<": "<<cnt<<endl;

    return 0;
}
