#include<bits/stdc++.h>
using namespace std;
#define ll long long int
set<ll>s;
void factor(int n)
{
    s.clear();
    int i ,cnt=0,cn=0;
    for(i=2; i<=(int)sqrt(n); i++)
    {
        while(n % i == 0)
        {
            s.insert(i);
            // printf("%d ",i);
            cnt++;
            n /= i;
        }
    }
    if (n > 1)  s.insert(n);// printf("%d",n);
    cn++;
    printf("\n");
    //  printf("%d \n",(cnt+cn));


}
int main()
{
    long long  int n,i,a[100000];
    n=100000;
    // primefactor( n);
    set< ll > :: iterator it;
    for(i=2; i<=n; i++)
    {
        factor( i);
         cout <<i<<": ";
        for(it = s.begin(); it != s.end(); it++)
        {
            cout << *it <<" ";
        }
    }
        return 0;
    }
