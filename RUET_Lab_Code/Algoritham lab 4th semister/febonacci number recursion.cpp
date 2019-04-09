#include<bits/stdc++.h>
using namespace std;


int fabonacci( int n){
if(n==0) return 0;
if(n==1) return 1;
else return (fabonacci(n-1)+fabonacci(n-2));
}
int main(){
int i,j,m,n,cnt=0;

int fabonacci( int n);
//cin>>n;
//freopen("inputr.txt","r",stdin);
 cin>>n;
//freopen("outputr","w",stdout);
for(i=0;i<n;i++){

   cout<<fabonacci(n)<<" ";
cnt++;
}
cout<<endl<<"Step no : "<<(cnt*3);
return 0;

}

