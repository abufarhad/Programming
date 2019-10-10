

#include<bits/stdc++.h>
using namespace std;
 double sum[1000010],res;
int main()
{
    long long int T,t=1;int n,base;

    for(int i=1;i<=1000001;i++)
            sum[i]=sum[i-1]+log10((double)i);

     cin>>T;

    while(t<=T){
        cin>>n>>base;
        if(n==0)
        {
            printf("Case %lld: %d\n",t,1);
        }else{

        res=(sum[n])/(log10((double)base));
        res=floor(res);

        printf("Case %lld: %d\n",t,(int)res+1);


        }
        ++t;
    }



    return 0;
}
