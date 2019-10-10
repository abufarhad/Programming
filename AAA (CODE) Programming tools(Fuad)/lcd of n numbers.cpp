
#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){

    if(a%b==0) return b;

    return GCD(b,a%b);

}

int main()
{   while(1){
    int num[10];
    int n,i,tem,tem2;
    int res_LCD;
    cout<<"how many numbers : ";
    cin>>n;
    cout<<"enter numbers :";
    for(i=0;i<n;i++)
        cin>>num[i];

    for(i=0;i<(n-1);i++)
    {
        tem=GCD(num[i],num[i+1]);
        res_LCD=(num[i]*num[i+1])/tem;
        num[i+1]=res_LCD;
    }
    cout<<"LCD : "<<res_LCD<<endl;
    cout<<"*******************************"<<endl;
    }
    return 0;
}

