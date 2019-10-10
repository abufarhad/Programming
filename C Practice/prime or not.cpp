#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,n,m,k=0;

    printf("Enter number for cheaking prime or not prime\n ");
    cin>>n;
    for(j=2; j<=sqrt(n); j++)
    {
        if(n%j==0)
        {
            k=1;
            break;
        }
    }

    if(k==0&&n!=1)
        cout<<"Yes";
    else
        cout<<"No";



    return 0;
}


