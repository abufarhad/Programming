#include<bits/stdc++.h>
using namespace std;
int counter[10001];

int main()
{
    int t,m;
    int n=10000,lim=sqrt(10000),k;
    //cin>>t;
    scanf("%d",&t);
    vector<int>p;

            for(int i=2; i<=lim; i++)
            if(!counter[i])
            {
                for(int j=i+i; j<=n; j+=i)

                    counter[j]++;
            }

    for(int i=2; i<=10000; i++)
        {
            //cout<<counter[i]<<endl;
            if(counter[i]>=3)
            {
                cout<<i<<endl;
                p.push_back(i);
                //cout<<i<<endl;
            }
        }
    for( m=1; m<=t; m++)
    {
       // cin>>k;
        scanf("%d",&k);




      //  cout<<p[k-1]<<endl;
        printf("%d\n",p[k-1]);
       // for(int j=0;j<p.size();j++){ cout<<" case : "<<j+1<<" "<<p[j]<<endl;}
    }
    return 0;
}
