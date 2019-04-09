#include<bits/stdc++.h>

using namespace std;

#define ll long long

/*
ll  noOfCombination(int n, int k){
int  i=0;
long long res=1;
if (k < n/2)
    k = n - k;
for(i = 0; i < k; i++){
    res *= (n-i);
    res /= (i+1);
}

  //output result
return res;
}
*/
const long int a = 1000000000;
long long int ncr(int n,int r)
{
 long long int fac1 = 1,fac2=1,fac;
 for(int i=r;i>=1;i--,n--)
    {
        fac1 = fac1 * n;
        if(fac1%i==0)
            fac1 = fac1/i;
        else
            fac2 = fac2 * i;
    }
 fac = fac1/fac2;
 return fac%a;
}

int main()
{
    ll m,n,i,l;
    ll result,r,r1,rm,rm1,res,res1;
    cin>>l;
    for(i=1;i<=l;i++)
    {
        cin>>m>>n;
        r=ncr(m,3);
        r1=ncr(n,3);
        result=r+r1;
        printf("Case %lld: %lld\n",i,result);
    }
}
