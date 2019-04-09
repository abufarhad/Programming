#include<bits/stdc++.h>
using namespace std;
int main(){
int i,n,m,j;
printf("Enter number of list \n");
cin>>n;
int a[n];
for(i=0;i<n;i++){ cin>>a[i]; }
printf("Enter the number you want to get occurrences  \n");
cin>>m;
 for(i=0;i<n;i++){
    if(a[i]==m){ cout<<"position found at "<<i+1<<" number position"<<endl; break;}
}
 for(i=n-1;i>=0;i--){
          if(a[i]==m){ cout<<"position found at "<<i+1<<" number position"<<endl; break;}
}}
