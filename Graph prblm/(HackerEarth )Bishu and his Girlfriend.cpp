#include<bits/stdc++.h>
using namespace std;
vector<int> node[100000];
int visited[100]={0};
int ans=0;

int dfs(int s,int length){
visited[s]=length;
//cout<<length<<" -l";

for(int i=0;i<node[s].size();i++){
    if(visited[node[s][i]]==0){
      // cout<<node[s][i]<<" ";
       dfs(node[s][i],length+1);
    }
}
}

 int main()
 {

     int n,e,i,s,a,b;
     cin>>n;
     for(i=0;i<n-1;i++){
        cin>>a>>b;
     node[a].push_back(b);
     node[b].push_back(a);
     }
     int  length=1;
     dfs(1,length);
     vector<pair<int, int> >v;
     int q,num;
     cin>>q;
   while(q--){
    cin>>num;
    v.push_back(make_pair(visited[num], num));}
    sort(v.begin(),v.end());
    cout<<v[0].second<<endl;

     return 0;
 }

