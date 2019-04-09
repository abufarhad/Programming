#include<iostream>
using namespace std;

void factorial( int n)
{
    n=n*(n-1);
    return n;
}


int main()
{
    int i,j,k,n,m;
    cout<<"Enter a number" <<endl;
    cin>>n;
     i=factorial(n)
    cout<<i<<endl;
    return 0;
}

