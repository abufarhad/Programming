#include<bits/stdc++.h>
using namespace std;
int dp[10000];

int fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    dp[n]=fib(n-1)+fib(n-2);
    cout<<"*"<<endl;
    return dp[n];
    cout<<"#ljknklnklnklnn"<<endl;

}
int main()
{
    int i;
//    for(i=0;i<20;i++)
//        dp[i]=-1;
    cout<<"enter ur required number :";
    int num;
    cin>>num;
    cout<<fib(num)<<endl;

    return 0;
}
