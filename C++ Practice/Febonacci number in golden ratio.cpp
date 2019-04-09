#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n;
    double phi,f;
    phi =((1+sqrt(5))/2);
//cin>>n;
   // freopen("inputf.txt","r",stdin);
    cin>>n;
   // freopen("outputf","w",stdout);
    for(i=0; i<n; i++)
    {

        f=((pow(phi,i)) - (pow(-phi,-i)))/sqrt(5);
        cout<<f<<" ";
    }
    cout<<endl<<"Step no : "<<n;
    return 0;

}
