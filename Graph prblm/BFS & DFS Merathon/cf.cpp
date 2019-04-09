#include<bits/stdc++.h>
using namespace std;

int sum (int a);

int main()
{
    int num,ans[10000], k,result;
    cin>>k;
    int cnt=0;

    for(int i=19;; i++)
    {
        result = sum(i);
        if(result==10)
        {
            //cout<<i<<" ";
            cnt++;
        }
        if(cnt==k){
        cout<<i<<endl;
        return 0;}
    }


    return 0;
}

int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
        return 0;
    }
}
