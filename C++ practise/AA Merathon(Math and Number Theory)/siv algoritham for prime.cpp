#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define M 1000000


void SieveOfEratosthenes(long long int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    int cnt=0;
    // Print all prime numbers
    cout<<"1"<<endl;
    for (int p=2; p<=n; p++)
    {
        if (prime[p]==true)
        //    cnt++;
        cout <<p << endl;
    }
    cout<<endl;
}

int main()
{
    long long  int n,t ;
    cin>>t;
    while(t--)
    {
        cin>>n;
        SieveOfEratosthenes(n);
    }
    return 0;
}




