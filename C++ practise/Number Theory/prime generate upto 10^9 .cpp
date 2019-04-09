#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define Max 100000000

ll p[Max],k=1;
vector<bool > a(100000000, true);  ///The main culprit , allocate this bool array dinamically


/*

ll prime( )
{
    ll i,j;
    a[0]=a[1]=1;

    for(i=4;i<=Max;i+=2)
    {
        a[i]=1;
    }
    for(i=3;i<=sqrt(Max);i+=2)
    {
        for(j=i*i;j<=Max;j=j+2*i)
        {
            a[j]=1;
        }
    }
    p[0]=2;

    for(i=3;i<=Max;i+=2)
    {
        if(a[i]==0)
        {
            p[k]=i;
            //cout<<p[k]<<" ";
            k++;
        }
    }
}

*/

//bool a[Max];
ll prime(ll n)
{
    ll i,j;

    for ( i=2; i*i<=n; i++)
    {
        if(a[i]==true)
        {
            for( j=i*2; j<=n; j += i)
                a[j]=false;
        }
    }

    ll k=1;
    for(i=2; i<=Max; i++)
    {
        if(a[i]==true)
        {
            p[k]=i;
            //cout<<i<<" ";
            k++;
        }
    }
}

int main()
{
    ll t,n,i=1;
    prime( Max);

//for(i=0;i<20;i++){ cout<<p[i]<<" "; }

    cin>>t;

    while(t--)
    {
        cin>>n;
//    cout << "Following are the prime numbers smaller "
//         << " than or equal to " << n << endl;
        //SieveOfEratosthenes(n);
        cout<<p[n]<<endl;
    }
    return 0;
}


