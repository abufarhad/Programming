#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll find_lastman(ll n,ll k)
{
    ///*** For 0th Index ***
    if(n==1)return 0;
    else return (find_lastman( n-1,k )+k)%n;
}

/*
    if n=3, k=3
       j(3,3)= (j(2,3)+3)%3
       j(2,3)= (j(1,3)+3)%2
       j(1,3)=0 means only one man here so index return 0;
       so,
       j(2,3)=(0+3)%2=1
       j(3,3)=(1+3)%3=1
       so, ans=1 for 0th index
            ans=2 for 1th index

        because of decreasing 1 every time from n then complexity of this code O(n)
*/

int main()
{
    ll m,n ,i,k;
    cin>>n>>k;
    ll ans=find_lastman(n,k);
    cout<<ans+1<<endl;  /// (+1) because 0th index initialize but result want to print 1th index
}
