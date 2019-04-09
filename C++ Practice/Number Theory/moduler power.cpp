// Iterative C program to compute modular power
///x^y%p  , where p is prime

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(int x, unsigned int y, int p)
{
    int res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p
            cout<<x<<endl;

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

// Driver program to test above functions
int main()
{
    long long  x,y,p;
    cin>>x>>y>>p;
   printf("Power is %u", power(x, y, p));
   return 0;
}

