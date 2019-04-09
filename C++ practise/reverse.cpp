#include<iostream>
using namespace std;
int main()
{
    int  a,n,m,i,j,rem,rev=0;
    cout<< "Enter a number"<<endl;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<rev<<endl;
    return 0;
}

