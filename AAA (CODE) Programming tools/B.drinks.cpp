#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin>>n;
    double tem,sum;

    for(int i=0;i<n;i++)
    {
        cin>>tem;
        if(tem!=0){
            sum=sum+(tem/100);
        }
    }
    double res;
    res=(sum/n)*100;
    cout<<res<<endl;
    printf("%0.12lf",res);
    return 0;
}
