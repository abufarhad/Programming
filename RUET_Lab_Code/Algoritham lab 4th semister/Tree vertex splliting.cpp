#include<bits/stdc++.h>
using namespace std;

vector<int>s_vertex;
int tree[100];
int weight[100];
int delay[100],node;
void tree_vertex_splitting(int x,int tolerance)
{
    if(tree[x]!=0)
    {
        if(2*x>node)
            delay[x]=0;
        else
        {
            tree_vertex_splitting(2*x,tolerance);
            delay[x]=max(delay[x],delay[2*x]+weight[2*x]);
            if(2*x+1<=node)
            {
                tree_vertex_splitting(2*x+1,tolerance);
                    delay[x]=max(delay[x],delay[2*x+1]+weight[2*x+1]);
            }
            if(tree[x]!=1 && (delay[x]+weight[x])>tolerance)
            {
                s_vertex.push_back(x);
                cout<<x<<" ";
                delay[x]=0;
            }
        }
    }
}

int main()
{
     int kount=0,ability;
     cin>>node>>ability;

     tree[0]=-1;
     tree[1]=1;
     weight[0]=-1;
     weight[1]=0;
     for(int i=2;i<=node;i++)
     {
         tree[i]=i;
         weight[i]=1+rand()%10;

//cin>>tree[i]>>weight[i];
     }
     cout<<"--------Generated Tree--------"<<endl;
//     for(int i=1;i<=node;i++)
//        cout<<tree[i]<<" weight="<<weight[i]<<endl;
cout<<"parent node"<<"        "<<"child"<<"      "<<"weight"<<endl<<endl;
     for(int i=1;i<=node;i++)
     {
         int x,y;
         x=2*i;
         y=x+1;
         if(x<=node){

         if(x%2==0)
         cout<<i<<"     ---------> "<<x<<"_Left       "<<weight[x]<<endl<<endl;
         if(x%2==1)
         cout<<i<<"     ---------> "<<x<<"_Right       "<<weight[x]<<endl<<endl;
         }

         if(y<=node){

if(y%2==0)
            cout<<i<<"     ---------> "<<y<<" _Left       "<<weight[y]<<endl<<endl;
if(y%2==1)
            cout<<i<<"     ---------> "<<y<<"_Right      "<<weight[y]<<endl<<endl;

         }

     }

     cout<<"-------Vertex which Split---------"<<endl;
     tree_vertex_splitting(1,ability);

     cout<<endl;

}
