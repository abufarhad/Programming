#include<bits/stdc++.h>
using namespace std;
bool seive[10009];
int main()
{
    int n,i,j,prime[100009];
    cout<<"\n\n\tenter the number u want to get prime factorization :";
    cin>>n;
    for(i=2;i<=sqrt(n);i++)
    {
        if(seive[i]==false)
        {
            for(j=i*2;j<=n;j+=i)
                seive[j]=true;
        }
    }
    int k=1;
    for(i=2;i<=n;i++){
        if(seive[i]==false){
            prime[k]=i;
            k++;
        }
    }
    vector<int>fact;
    k=1;

    while(n>1){

        if(n%prime[k]==0){

            n=n/prime[k];
            fact.push_back(prime[k]);
            k--;
        }
        k++;
    }
    cout<<"\n\n\tthe prime factors are :";
    for(int i=0;i<fact.size();i++)
        cout<<fact[i]<<" ";


    cout<<endl;
    return 0;
}
