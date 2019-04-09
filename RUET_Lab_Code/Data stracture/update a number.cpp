/// baki......................
#include<iostream>
using namespace std;
int main(){
    int pos,i,n,item;
    cin>>n; int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>pos>>item;
    for(i=0;i>=pos;i++){
        if(a[i]==a[pos]){
           a[pos]=item;}
    }
     for(i=0;i<n;i++){
            cout<<a[i]<<" ";}

return 0;
}
