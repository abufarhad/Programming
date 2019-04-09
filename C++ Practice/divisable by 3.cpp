#include<bits/stdc++.h>
using namespace std;

int comp(long long  n)
{
///troyi (1, 12, 123)
///1 troyi has 2 number that divisable to 3 cheak it . so, n/3 decided how much troyi .
///if reminder =2 that means in that troyi has one number that divisable to 3 so add 1 if it happens.
   return 2*(n/3)+(n%3==2 ?1:0);
}

int main()
{
    long long i,j,m,n;
    cin>>n;
   for(m=0;m<n;m++){
        cin>>i>>j;
       // long long  a=comp(j)-comp(i-1);
        printf("Case %lld: %d\n",m+1,(comp(j)-comp(i-1)));
    }
}
