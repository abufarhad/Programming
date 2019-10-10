#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int T,t=1,a,b,i,res;
    cin>>T;

    while(t<=T){
        cin>>a>>b;
        int kount=0,p;

        for(i=a;i<=b;i++){
            res=(i*(i+1))/2;

            if(res%3==0){
                 kount++;
                 cout<<"X"<<kount<<endl;
            }

        }
        printf("Case %lld: %d\n",t,kount);
        ++t;
    }


    return 0;
}
