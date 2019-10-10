
#include<bits/stdc++.h>
using namespace std;
int par[26];

int find_parent(int x){
    if(par[x]==x)
        return x;
    par[x]=find_parent(par[x]);
    return par[x];
    //return find_parent(par[x]);
}
int main()
{
    int ntest;
    string str;
    char c;

    cin>>ntest;
    getchar();
    while(ntest--)
    {
        for(int i=0; i<26; i++)
            par[i]=i;
        cin>>c;
        int nedge;
        cin>>nedge;
        getchar();
        while(nedge--)
        {
            cin>>str;
            int x=str[0]-'A';
            int y=str[1]-'A';
            cout<<x<<" "<<y<<endl;
            int px=find_parent(x);
            int py=find_parent(y);
            if(px!=py)
            {
                cout<<x<<" "<<y<<" "<<px<<" "<<py<<endl;
                par[py]=px;

            }
        }
        int counter=0;
        for(int i=0;i<=c-'A';i++)
        {
            cout<<i<<" "<<par[i]<<endl;
            if(par[i]==i)
                {counter++;}
        }
        cout<<counter<<endl;
    }
}
