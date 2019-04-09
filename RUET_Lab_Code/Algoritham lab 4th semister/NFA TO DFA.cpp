#include<bits/stdc++.h>
using namespace std;
int n_node,n_edge;
map<string,string>power_set;
map<char,int>mp;
vector< pair<char,char> >v[100];
vector<string>vs;
void printPowerSet(char *set, int set_size)
{
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;
    for(counter = 0; counter < pow_set_size; counter++)
    {
        string str="";
      for(j = 0; j < set_size; j++)
       {
          if(counter & (1<<j)){
            str+=(set[j]);
          }
       }
       vs.push_back(str);
       power_set[str]=str;
    }
}
string jekhne_jawa_jay(char ch,char w)
{
    string tem="";
    int i=mp[ch];
    for(int j=0;j<v[i].size();j++){
       if(v[i][j].second == w){
         tem+=" ";
         tem+=(v[i][j].first);
        }
    }
    return tem;
}
bool cmp(string a,string b) {  return a.size()<b.size(); }
int main()
{
    cout<<"\n\n\t\t   DYNAMIC NFA TO DFA FOR BIT STRING \n\n";
    cout<<"\tenter number of node : ";cin>>n_node;
    cout<<"\tenter number of edge : ";cin>>n_edge;
    int k=1;
    for(char ch='A';ch<='Z';ch++){
        mp[ch]=k;
        k++;
    }
    set<char>how_many;
    char from ,to,weight;
    cout<<"\t\tEnter "<<n_edge<<" edges with their weight :\n\n";
    for(int i=0;i<n_edge;i++){
        cout<<"\t\t";
        cin>>from>>to>>weight;
        how_many.insert(from);
        how_many.insert(to);
        v[    mp[from]   ].push_back(make_pair(to,weight));
    }
    cout<<"\n\n\t\tchecking the graph : \n\n";
    char ch='A';
    for(int i=1;i<=n_node;i++)
    {
        cout<<"\t\tfrom node :"<<ch<<" :";
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j].first<<" ("<<v[i][j].second<<")"<<"\t";
        }
        cout<<endl;
        ch++;
    }
    char sset[how_many.size()];
    int m=0;
    for(set<char>::iterator p=how_many.begin();p!=how_many.end();p++)
    {
       sset[m++]=*p;
    }
    printPowerSet(sset, how_many.size());
    cout<<"\n\n\t\t---------------- Subset Constraction Table ---------------\n\n";
sort(vs.begin(),vs.end(),cmp);
for(int j=0;j<vs.size();j++){
        //cout<<it->first<<" "<<it->second<<endl;
        string current=vs[j];
        cout<<"\t\t----------------------------------------------------------"<<endl;
        if(current.length()==0)
           current="{ }";
        cout<<"\t\tfrom : "<<current<<" ";
        for(int i=current.size();i<6;i++) /// just for better presentation
            cout<<" ";
        string tem="{";
        cout<<"with 0 : ";
        for(int i=0;i<current.size();i++){
            char c=current[i];
            tem+=jekhne_jawa_jay(c,'0');
        }
        tem+=" }";
        cout<<tem;
        cout<<"\twith 1 : ";
        tem="{";
         for(int i=0;i<current.size();i++){
            int c=current[i];
            tem+=jekhne_jawa_jay(c,'1');
        }
        tem+=" }";
        cout<<tem;
        cout<<endl;
    }
    cout<<"\n\n";
    cout<<"********************** DIAGRAM ************************\n\n";
    for(int j=0;j<vs.size();j++){
        //cout<<it->first<<" "<<it->second<<endl;
        string current=vs[j];
        cout<<current<<"  ->  ";
        string tem="{";
        for(int i=0;i<current.size();i++){
            char c=current[i];
            tem+=jekhne_jawa_jay(c,'0');
        }
        tem+=" }";
        cout<<tem;
        cout<<" & ";
        tem="{";
         for(int i=0;i<current.size();i++){
            int c=current[i];
            tem+=jekhne_jawa_jay(c,'1');
        }
        tem+=" }";
        cout<<tem;
        cout<<endl;
    }
    getchar();
    return 0;
}
