#include <bits/stdc++.h>
using namespace std;
#define MAX 100000000
#define LIM 10000

int flagArr[MAX>>6];
#define ifComp(x) (flagArr[x>>6]&(1<<((x>>1)&31)))
#define isComp(x) (flagArr[x>>6]|=(1<<((x>>1)&31)))

void BitSeive()
{
       register int i,j,k;
       for(i=3;i<LIM;i+=2)
       {
              if(!ifComp(i))
              {
                     for(j=i*i,k=i<<1;j<MAX;j+=k)
                            isComp(j);
              }
       }
       printf("2 ");
       for(i=3,j=2;i<MAX && j<11;i+=2)
       {
              if(!ifComp(i))
              {
                     printf("%d ",i);
                     j++;
              }
       }
}

int main() {
       BitSeive();
       return 0;
}
