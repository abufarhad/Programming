// A modular inverse based solution to
// compute nCr % p
#include<bits/stdc++.h>
using namespace std;

/* Iterative Function to calculate (x^y)%p
  in O(log y) */
int power(int x, int y, int p)
{
    int res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

// Returns n^(-1) mod p
int modInverse(int n, int p)
{
    return power(n, p-2, p);
}

// Returns nCr % p using Fermat's little
// theorem.
int nCrModPFermat(int n, int r, int p)
{
   // Base case
   if (r==0)
      return 1;

    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    int fac[n+1];
    fac[0] = 1;
    for (int i=1 ; i<=n; i++){
        fac[i] = fac[i-1]*i%p;
        cout<<fac[i]<<" ";}

    return (fac[n]* modInverse(fac[r], p) % p *
            modInverse(fac[n-r], p) % p) % p;
}

// Driver program
int main()
{
    // p must be a prime greater than n.
   // int n = 10, r = 2, p = 13;
    long long  n,r,p;
    cin>>n>>r>>p;
    cout << "Value of nCr % p is "
         << nCrModPFermat(n, r, p);
    return 0;
}
