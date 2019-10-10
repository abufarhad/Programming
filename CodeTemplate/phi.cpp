
vector<bool>visited(1000007,false);
vector<ll int >data;
vector<ll int >info;

ll int prime[1000000];
bool  check[10000000];
//ll int cmsum[10000007];


ll int  phi[100000];
void  sieve(ll int n)
{
    ll int z,x=1;
    prime[0]=2;

    for(int i=3; i<=n; i+=2)
    {

        if(!check[i])
        {
            prime[x]=i;
            x++;
            for(int j=i*i; j<=n; j+=i)
            {

                check[j]=true;


                phi[j]=(phi[i]/i)*(i-1);
            }
        }
        z=i;
    }
}

int main()
{

    ll int a,b,p,q,r,s,n,m,x,y,sum,ans,mx,mn;
    int cnt,z,c;
    bool ys,no;
    cin>>n;



    for1(n)
    {



        phi[i]=i;
    }

    for1(n)
    {

        cout<<phi[i]<<endl;
    }

    //f
}



