#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    list<string>poland;
    list<string>::iterator pol;
    list<string>enemy;
    list<string>::iterator ene;
    string tem;int i;
    for(i=0;i<m;i++){
        cin>>tem;
        poland.push_back(tem);
    }
    for(i=0;i<n;i++){
        cin>>tem;
        enemy.push_back(tem);
    }
    i=1;
    //cout<<"sssss"<<poland.size()<<endl;
    //int dec=1;
    while(poland.size()!=0 && enemy.size()!=0){
        if(i%2!=0){
            pol=poland.begin();
            tem=*pol;
            poland.remove(tem);
            enemy.remove(tem);
            //dec=1;
        }
        else{
            ene=enemy.begin();
            tem=*ene;
            poland.remove(tem);
            enemy.remove(tem);
            //dec=0;
           // cout<<"ek"<<endl;
        }
        //cout<<i<<" ps"<<poland.size()<<" es"<<enemy.size()<<endl;
       i++;
    }
   //cout<<"pol size "<<poland.size()<<" dec"<<dec<<endl;

    if(enemy.size()!=0)
        cout<<"NO"<<endl;
    else
            cout<<"YES"<<endl;

    return 0;
}
