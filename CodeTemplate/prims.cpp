
typedef pair<ll,pair<ll,ll> iPair;
typedef pair<pair<ll,ll>,ll> iPair1;

priority_queue<iPair,vector<iPair>,greater<iPair> > pq;


bool taken[10000];


vector<iPair1>info;

void prims(){

bool ys=1;
while(ys){


for(ll i=0;i<gra[past];i++){

ll v=gra[past][i].first;
ll cost=gra[past][i].second;

pq.push(iPair(cost,mkpr(past,v)));



}

while(!got&& !pq.empty()){

    ll x=pq.top().ss.ss;
    ll y=pq.top().ss.ff;
    ll z=pq.top().ff;
    pq.pop();
    if(!taken[ss])
{

info.pb(iPair1(mkpr(y,x),))
    past=x;
    got=1;


}    //ll y=pq.top().ss



}







}




}



int main(){








    //f


}


