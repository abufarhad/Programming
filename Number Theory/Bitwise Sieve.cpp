#include <bits/stdc++.h>
using namespace std;

#define mx 100000000


bool Check(int N,int pos) { return (bool)(N & (1<<pos)); }
int Set(int N,int pos) { return N= N | (1<<pos); }

int status[(mx/32)+2];

void BitSeive()
{
    int i, j, sqrtN;
    sqrtN = int( sqrt( mx ) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= mx; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }

    puts("2");
    for(i=3; i<=mx; i+=2)
        if( Check(status[i>>5],i&31)==0)
            printf("%d\n",i);
}

int main()
{
    BitSeive();
    return 0;
}
