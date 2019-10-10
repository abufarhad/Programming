#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll i,n,kount=0;
    string tem;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>tem;
        if(tem=="Tetrahedron")
            kount+=4;
        else if(tem=="Cube")
            kount+=6;
        else if(tem=="Octahedron")
            kount+=8;
         else if(tem=="Dodecahedron")
            kount+=12;
         else if(tem=="Icosahedron")
            kount+=20;
    }
    cout<<kount<<endl;
    return 0;
}
