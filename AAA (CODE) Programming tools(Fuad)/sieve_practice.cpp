#include<bits/stdc++.h>
using namespace std;
bool prime[1000000000000];


int main()
{
    long long int n,i,j;
    cout<<sqrt(9.0)<<endl;

    cin>>n;

    for(i=2;i<=sqrt(n);i++)
    {
       if(prime[i]==false)
            for(int j=i*2;j<=n;j+=i){
                prime[j]=true;
            }
    }
    for(i=2;i<=n;i++){
        if(prime[i]==false)
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
