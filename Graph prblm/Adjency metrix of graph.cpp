#include<bits/stdc++.h>
using namespace std;
 vector<int>adj[1000];
 vector<int>vec[1000];
 int main()
 {
     int m,n,i,k,t,a,b;
     cin>>t;
     while(t--){
        cin>>m>>n;
        for(i=0;i<n;i++){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for(i=1;i<=1000;i++){
            if(!adj[i].empty()){
                for(vector<int>::iterator it=adj[i].begin(); it!=adj[i].end(); it++){
                   vec[i].push_back(*it);
                }
            }
        }
//sort(vec.begin(),vec.end());
int q,num;
cin>>q;
while(q--){
    cin>>num;
   // for(i=1;i<=1000;i++){
    for(i=0;i<vec)

}}}

     }

 }
