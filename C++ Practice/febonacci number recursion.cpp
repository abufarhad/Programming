#include<bits/stdc++.h>
using namespace std;


int fabonacci( int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return (fabonacci(n-1)+fabonacci(n-2));
}
int main()
{
    int i,j,m,n,cnt=0;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<fabonacci(i)<<" ";
        cnt++;
    }
    cout<<endl<<"Step no : "<<(cnt*3);
    return 0;

}

