ll int has(  string & ptr){

    //cout<<ptr<<endl;
ll int     mod=1000003;
    ll int x=7;
ll int sum=0;
for(int i=0;i<ptr.size();i++){
sum+=((int)ptr[i]*x)%mod;

x=x*7;
}
