ll int pfind(ll int n){

if(pr[n]==n) {return n;}

return pr[n]=pfind(pr[n]);
}
void unionmake(ll int x,ll int y){

    x=pfind(x);
    y=pfind(y);

pr[y]=x;


}
struct edge{
ll int a,b,c;

edge(int x,int y,int z){
a=x;
b=y;
c=z;
}

};

bool  operator <(edge x;edge y){


return x.c<y.c;
}
vector<edge>graph;

void  mst(){
    ll int mcost=0;
for(auto  it :graph){
int a=pfind(it.a);
int b=pfind(it.b);
if(a!=b){
        mcost+=c;
}

}
return  mcost;


}
