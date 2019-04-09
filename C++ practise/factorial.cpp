#include<iostream>
using namespace std;

long long fact(int m)
{
    if(m<=1)
        return(1);
    else
        return( m*fact(m-1));
}


int main()
{
    int i,j,k,n,p,m;
    cout<<"Enter a number" <<endl;
    cin>>n;
    p=fact(n);

    cout<<"factorial is ="<<p<<endl;
    //return 0;
}



