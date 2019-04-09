#include <bits/stdc++.h>
using namespace std;

int knapsack(int n , int W , vector<int>v , vector<int>wt){
    int k[n+1][W+1];
     for(int i=0 ; i<=n ; i++){
         for(int w=0; w<=W ; w++){
             if(i == 0 || w==0){
                 k[i][w] =  0;
             }
             else if(wt[i-1] <= w){
             k[i][w] = max(k[i-1][w] , v[i-1] + k[i-1][w-wt[i-1]]);
         }
             else k[i][w] = k[i-1][w];         }
     }
     return k[n][W];
}

int main() {
    int t,n,W;
    vector<int>v;
    vector<int>w;
    cin>>t;
    while(t--){
        cin>>n>>W;
        for(int i=0;i<n;i++){
                int m;
            cin>>m;
            v.push_back(m);
        }
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
             w.push_back(m);
        }
        cout<<knapsack(n,W,v,w)<<endl;
    }

	//code
	return 0;
}

