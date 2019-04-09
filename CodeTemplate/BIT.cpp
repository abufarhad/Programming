
typedef pair<ll int,ll int> iPair;
ll Btree[2000001];

ll A[1000002];



ll getsum(ll index,ll n){


ll sum=0;
//index++;
while(index>0){
        sum+=Btree[index];




index-=index &(-index);


}
return sum;



}
void update(ll index,ll a,ll n,ll c){
    ll past;
    if(c){

 past=A[index];
A[index]=a;
    }
    else{
        past=0;

    }

//index++;


while(index<=n){



Btree[index]=Btree[index]+a;

   // Btree[index]=Btree[index]-past;
    index+=index & (-index);
}




}
void  create(ll n){


for(ll i=1;i<=n;i++){



    update(i,A[i],n,0);
}



}


int main(){
ll  n;

while(cin>>n){

        for(ll i=1;i<=n;i++)
             sl(A[i]);

             create(n);




ll q;
cin>>q;

for(ll i=0;i<q;i++){
        string A;
cin>>A;

ll l,r,v;
if(A=="q"){
        cin>>l>>r;

        ll y=getsum(r,n);
        ll x=getsum(l-1,n);

        cout<<y-x<<endl;



}
else
{
    cin>>l>>r;
    update(l,r,n,1LL);

}

}



    //f
}

}
