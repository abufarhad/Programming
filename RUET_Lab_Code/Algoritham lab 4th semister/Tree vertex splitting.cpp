#include<bits/stdc++.h>
using namespace std;

map<int ,int > used;
int cnt=0,cost=5;
struct value{
int leftv, rightv,val;
}p[100];

int main()
{
    int i,j;
    for(i=1;i<=20;i++){
       // p[i].val=0;
        p[i].leftv=0;
        p[i].rightv=0;
    }

    for(i=1;i<=10;i++){
        cin>>p[i].leftv>>p[i].rightv;
    }

    for(i=10;i>1;i--){
        int val=max(p[i].leftv, p[i].rightv);
        int par=i/2,n;
        if(2*par<i) n=p[par].rightv;
        else n=p[par].leftv;

        val+=n;
        if(val>cost )  {cnt++;
        used[i]=1;}}
        cout<<cnt<<endl;
        for(i=1;i<=10;i++){
            if(used[i]) cout<<i<<" ";
        }
        }
