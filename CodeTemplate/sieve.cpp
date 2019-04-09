
ll int prime[1000000];
bool  check[10000000];
//ll int cmsum[10000007];
ll int   sieve(ll int n)
{
    ll int z,x=1;
    prime[0]=2;
    check[1]=check[0]=true;


    for(int i=3; i*i<=n; i+=2)
    {
        if(!check[i])
        {
            prime[x]=i;
            x++;
            for(int j=i*i; j<=n; j+=i)
            {
                check[j]=true;
            }
        }
        z=i;
    }
    for(int j=4; j<=n; j+=2)
    {
        check[j]=true;

    }
    for(int j=z+1; j<=n; j++)
    {
        if(!check[j])
        {
            prime[x]=j;
            x++;
        }
    }
    return  x;
}

