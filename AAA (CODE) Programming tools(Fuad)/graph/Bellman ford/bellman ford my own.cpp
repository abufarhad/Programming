#include<bits/stdc++.h>
using namespace std;


vector<pair<int,int> >v[100];

int dis[1000];
int par[1000];


int main()
{
    int n;
    cin>>n;

    int e;
    cin>>e;
    int fr,to,w;
    for(int i=0;i<e;i++)
    {
        cin>>fr>>to>>w;
        v[fr].push_back(make_pair(w,to));
    }

    fill(dis,dis+n+1,INT_MAX);
    fill(par,par+n+1,-1);
    int s;
    cin>>s;
    dis[s]=0;
    par[s]=0;

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<v[j].size();k++)
            {
                pair<int,int> now=v[j][k];

                if(dis[j]+now.first<dis[now.second]){
                    dis[now.second]=dis[j]+now.first;
                    par[now.second]=j;
                }
            }
        }
    }


        for(int j=0;j<n;j++)
        {
            for(int k=0;k<v[j].size();k++)
            {
                pair<int,int> now=v[j][k];

                if(dis[j]+now.first<dis[now.second]){
                    cout<<"negative cycle found :::";
                }
            }
        }



    for(int i=0;i<n;i++)
        cout<<"dis of "<<i<<" : "<<dis[i]<<endl;


    cout<<"***********************************"<<endl;
    for(int i=0;i<n;i++)
        cout<<"par "<<i<<" : "<<par[i]<<endl;



    return 0;
}
