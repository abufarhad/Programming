#include<bits/stdc++.h>
using namespace std;

int cn=0;

int fabonacci( int n)
{
    cn++;
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
//    for(i=0; i<n; i++)
//    {
//        cout<<fabonacci(i)<<" ";
//        cnt++;
//    }
    cout<<fabonacci(n)<<endl;
    //cout<<endl<<cn<<" "<<endl<<"Step no : "<<(cnt*3);
    return 0;

}

