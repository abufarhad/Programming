
vector<int> witness;
int sz=4;

LLD mulmod(LLD a, LLD b,LLD c)
{
    LLD x = 0,y=a%c;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x = (x+y)%c;
        }
        y = (y*2LL)%c;
        b /= 2;
    }
    return x%c;
}
LLD modulo(LLD a, LLD b, LLD c)
{
    LLD x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=mulmod(x,y,c);
        }
        y = mulmod(y,y,c);
        b /= 2;
    }
    return x%c;
}

bool Miller(long long p)
{
    if(p<2)
    {
        return false;
    }
    if(p!=2 && p%2==0)
    {
        return false;
    }
    long long s=p-1;
    while(s%2==0)
    {
        s/=2;
    }
    for(int i=0; i<sz; i++)
    {
        long long a=witness[i],temp=s;
        long long mod=modulo(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1)
        {
            mod=mulmod(mod,mod,p);
            temp *= 2;
        }
        if(mod!=p-1 && temp%2==0)
        {
            return false;
        }
    }
    return true;
}




bool isprime(LLD n)
{
    witness.PB(2);
    witness.PB(13);
    witness.PB(23);
    witness.PB(1662803);
    for(int i=0; i<sz; i++) if(n==witness[i])
            return true;
    for(int i=0; i<sz; i++) if(n%witness[i]==0)
            return false;
    return Miller(n);
}
