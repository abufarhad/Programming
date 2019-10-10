#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define md 1000000000
int m,p,i,j;
ll a[1000][1000];
void printPascal( )
{
    for(i=0; i<1000; i++)
    {
        for(j=0; j<=i; j++)
        {
            if(i==0 || i==j)
                a[i][j]=1;
            else
                a[i][j]= (a[i-1][j-1]%md+a[i-1][j]%md)%md;
        }
    }
}
// Driver code
int main()
{
    long long  t,q,n;
    printPascal( );


    cin>>t;
    while(t--)
    {
        cin>>q;
        for(int j=0; j<=q; j++)
        {
            if(a[q][j] !=0)
                cout<<a[q][j]%md<<" ";
        }
        cout<<endl;
    }
}
