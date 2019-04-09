#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i,n,k,j,count=0;
    cin>>n; long long  a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
   sort(a , a + n );
	for(int i=0;i<=n-3;i++)
   {
     if(a[i]+a[i+1]>a[i+2])
     {
         cout<<"YES";
         return 0;
     }
   }
   cout<<"NO";
   return 0;
}

