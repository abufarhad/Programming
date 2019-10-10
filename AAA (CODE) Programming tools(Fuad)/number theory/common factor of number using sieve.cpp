#include<bits/stdc++.h>
using namespace std;

vector<int>divisors[1000002];

void common_divisor(int n){

    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j+=i)
            divisors[j].push_back(i);
}

int main(){
    int n;
    cout<<"\n\n ";
    cin>>n;
    common_divisor(n);
    for(int i=1;i<=n;i++){
            cout<<"for "<<i<<" : ";
        for(int j=0;j<divisors[i].size();j++)
            cout<<divisors[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
