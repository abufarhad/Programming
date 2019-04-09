#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int i;
    for(i=0; i<=3; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(i=0; i<=3; i++)
    {
        printf("%d ",v[i]);
    }
    return 0;
}
