#include<bits/stdc++.h>
using namespace std;

void factor(int n)
{
    vector<int>s;
    for(int i=2; i<=(int)sqrt(n); i++)
    {
        while(n % i == 0)
        {
            //printf("%d ",i);
            s.push_back(i);
            n /= i;
        }
    }

    if (n > 1)   //printf("n= %d   ",n);
        s.push_back(n);

    vector< int > :: iterator it;
    for(it = s.begin(); it != s.end(); it++)
    {
        cout << *it <<" ";
    }

}
int main()
{
    long long  int n,t=100000,i;
    //cin>>n;
//    for(i=2;i<=1000;i++){
//    cout<<i<<": ";
    factor(100000000);
    cout<<endl;
    return 0;
}

