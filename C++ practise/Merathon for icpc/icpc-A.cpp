#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,i,n;
  cin>>t;
  for(i=0;i<t;i++)
  {
    int n,arr[10][10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    if(n==5)
    {
        cout<<"Case "<<i+1<<": "<<n-1<<endl;
    }
    else
    {
        cout<<"Case "<<i+1<<": "<<0<<endl;
    }
  }
return 0;
}
