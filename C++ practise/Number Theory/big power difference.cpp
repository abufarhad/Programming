#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  double m,n,x,y,f,s;
    cin>>m>>n;
        x= m*log(n) - n*log(m);
        cout<<(x<0?">":x>0?"<":"=");

    return 0;
}
