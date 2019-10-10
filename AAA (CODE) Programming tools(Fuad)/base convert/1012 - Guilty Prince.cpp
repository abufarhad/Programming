#include<bits/stdc++.h>
using namespace std;

//vector<char>v[10000];

char str[25][25];


//#define MAX 501
//typedef vector<vector<int> > vec2d;
//vec2d matrix(MAX ,vector<int>(MAX, 0));

vector< vector<char> >v(10000);

int main()
{
    int T,t=1;
    cin>>T;

    while(t<=T){
        int col,row;cin>>col>>row;
        int start,curr,now;
        for(int i=0;i<row;i++){ /// input
                cin>>str[i];

            for(int j=0;j<col;j++)
                if(str[i][j]=='@')
                    start=i*row+j;
        }





        for(int i=0;i<row;i++){ ///making graph
            for(int j=0;j<col;j++){

               if(str[i][j]=='.' || str[i][j]=='@'){

                curr=row*i+j;

                for(int k=j-1;k>=0;k--){ ///to row left
                    if(str[i][k]=='.' || str[i][i]=='@'){
                        now=i*row+k;
                        v[curr].push_back(now);
                    }else
                        break;

                }


                for(int k=j+1;k<col;k++){ ///to row right
                    if(str[i][k]=='.' || str[i][i]=='@'){
                        now=i*row+k;
                        v[curr].push_back(now);
                    }else
                        break;

                }


                for(int k=i-1;k>=0;k--){ ///to col up
                    if(str[k][j]=='.' || str[k][j]=='@'){
                        now=k*row+j;
                        v[curr].push_back(now);
                    }else
                        break;

                }

                for(int k=i+1;k<row;k++){ ///to col down
                    if(str[k][j]=='.' || str[k][j]=='@'){
                        now=k*row+j;
                        v[curr].push_back(now);
                    }else
                        break;

                }
              }

           }
        } /// making graph end


        int kount=1;
        queue<int>q;int vis[10000]={0};
        q.push(start);
        vis[start]=1;
        while(!q.empty()){
            int current=q.front();
            q.pop();

            for(int i=0;i<v[current].size();i++){
                int next=v[current][i];

                if(vis[next]==0){
                    vis[next]=1;
                    kount++;
                    q.push(next);
                }
            }
        }
        cout<<"Case "<<t<<": "<<kount<<endl;
        ++t;

//        for(int i=0;i<v.size();i++)
//            v[i].clear();
    }






}


