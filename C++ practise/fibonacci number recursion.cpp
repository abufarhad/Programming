#include<bits/stdc++.h>
using namespace std;

int fibonacci( int n);

int fibonacci( int n){
if(n==0) return 0;
if(n==1) return 1;
else return (fibonacci(n-1)+fibonacci(n-2));
}
int main(){
int i,j,m,n,cnt=0;
//cin>>n;
freopen("inputr.txt","r",stdin);
 cin>>n;
freopen("outputr.txt","w",stdout);
for(i=0;i<n;i++){

   cout<<fibonacci(i)<<" ";
cnt++;
}
cout<<endl<<"Step no : "<<(cnt*3);
return 0;

}

