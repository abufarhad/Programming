
///big number power ---->>>

#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

//int lst(long long int z,long long int i,long long int k)  {
//    if(i==1)  {
//        return z%k;    }
//    if(i%2==0) {
//        return ((lst(z,i/2,k)%k)*(lst(z,i/2,k)%k))%k;  }
//    else    {
//        return ((z%k)*(lst(z,i/2,k)%k)*(lst(z,i/2,k)%k))%k;  }   }

typedef unsigned long long uint64;
uint64  PowMod(uint64 x, uint64 e, uint64 mod)
{
    uint64 res;
    if (e == 0)
    {
        res = 1;
    }
    else if (e == 1)
    {
        res = x;
    }
    else
    {
        res = PowMod(x, e / 2, mod);
        res = res * res % mod;
        if (e % 2)
            res = res * x % mod;
    }
    return res;
}

using namespace std;
int main()
{
    long long int i,z,p,d,y,tst,dd,zz,q,t;
    double s,intpart,f;

    scanf("%lld",&t);
    //  tst=1;
    // while(t--){
    for(long long int v=1; v<=t; v++)
    {
        scanf("%lld%lld",&p,&q);
        printf("Case %lld: ",v);
        z=p;
        zz=q;
        s=(double)q*log10(p);
        //cout<<s/q<<endl;
        ///cout<<endl<<s<<endl;

        f=modf(s,&intpart);
        ///cout<<f<<"bhjk"<<endl;
        s=pow(10.0,f)*100000.0;
        //y=modf(s,&intpart);
        //cout<<s<<endl;
        ///ei porjonto thik ase but
        y=s;
        //cout<<y<<endl;
        ///ekhane zhamela hocce

        stack<long long int>ami;
        while(y)
        {
            p=y%10;
            y=y/10;  //cout<<"mod  "<<p<<"  divided  "<<y<<endl;
            ami.push(p);
        }

        p=3;
        while(p--&&!ami.empty())
        {
            printf("%lld",ami.top());
            //cout<<ami.top();
            ami.pop();
        }
        printf(" ");
//f=(double)y;


//        while(!ami.empty()) {
//            ami.pop();  }

        // y=lst(z,zz,1000);
        y=PowMod(z,zz,1000);
        //cout<<y<<endl;
        if(y/10==0)
        {
            printf("00%lld\n",y);
        }
        else if(y/100==0)
        {
            printf("0%lld\n",y);
        }
        else
        {
            printf("%lld\n",y);
        }
        //cout<<y<<" ";}
//cout<<"vghjk\n";

    }
    return 0;
}


