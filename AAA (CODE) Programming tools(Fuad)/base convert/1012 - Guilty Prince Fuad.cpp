#include<bits/stdc++.h>
using namespace std;

int col,row;
char str[25][25];
bool vis[25][25];


int dirx[4]={0,0,1,-1};
int diry[4]={1,-1,0,0};

int bfs( pair<int,int> start){

        queue< pair<int,int> > q;
        q.push(start);
        int kounter=1;

        while(q.empty()==false){

            pair<int,int> curr=q.front();
            q.pop();

            int tox=curr.first;
            int toy=curr.second;
            for(int i=0;i<4;i++){

                int tx=tox+dirx[i];
                int ty=toy+diry[i];

                if(tx>=0 && tx<row && ty>=0 && ty<col && vis[tx][ty]==false && str[tx][ty]=='.'){
                    q.push(make_pair(tx,ty));
                    vis[tx][ty]==true;
                    kounter++;
                }

             }
    }
    return kounter;
}






int main()
{
    int T,t=1;
    cin>>T;
    pair<int,int>start;

    while(t<=T){
        cin>>col>>row;


        for(int i=0;i<row;i++){}
            for(int j=0;j<col;j++){
                vis[i][j]=false;
            }
        }


        for(int i=0;i<row;i++){
                cin>>str[i];

            for(int j=0;j<col;j++){
                if(str[i][j]=='@')
                    start=make_pair(i,j);
            }
        }

        cout<<"Case "<<t<<": "<<bfs(start)<<endl;
        ++t;

    }
}
