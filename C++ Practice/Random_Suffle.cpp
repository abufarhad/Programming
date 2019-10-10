#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);

    string A[20001];
    int  i=0;
    while(cin>>A[i])
    {
        if(A[i]=="stop") break;
        i++;
    }
    random_shuffle(A,A+i);

    for(int  j=0; j<i; j++)cout<<A[j]<<endl;

}
