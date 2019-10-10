#include<bits/stdc++.h>
using namespace std;

//vector<char>v[10000];

char str[25][25];


//#define MAX 501
//typedef vector<vector<int> > vec2d;
//vec2d matrix(MAX ,vector<int>(MAX, 0));

//vector< vector<char> >v(10000);
int col,row;
bool vis[20][20];
int dirx[4]={0,0,1,-1};
int diry[4]={1,-1,0,0};

int bfs(pair<int,int> start)
{
    int counter=1;
    queue<pair<int,int> >q;
    q.push(start);

    while(q.empty()==false){

        pair<int,int> from=q.front();
        q.pop();
        int fromx=from.first;
        int fromy=from.second;


        for(int i=0;i<4;i++){
            int tox=fromx+dirx[i];
            int toy=fromy+diry[i];
            if(tox >=0 && toy >=0 && tox<row && toy<col && vis[tox][toy]==false && str[tox][toy]=='.'){
                q.push(make_pair(tox,toy));
                vis[tox][toy]=1;
                counter++;
            }
        }
    }
    return counter;
}

int main()
{
    int T,t=1;
    cin>>T;
    pair<int,int>start;

    while(t<=T){
        cin>>col>>row;
        int curr,now;

        for(int i=0;i<row;i++){

            for(int j=0;j<col;j++){
                vis[i][j]=false;
            }
        }


        for(int i=0;i<row;i++){
                cin>>str[i];

            for(int j=0;j<col;j++)
                if(str[i][j]=='@')
                    start=make_pair(i,j);
        }
        cout<<"Case "<<t<<": "<<bfs(start)<<endl;
        ++t;

//        for(int i=0;i<v.size();i++)
//            v[i].clear();
    }






}



