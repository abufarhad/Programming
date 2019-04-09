#include<bits/stdc++.h>
using namespace std;
const size_t l=5;
int main(){
 string s,h,str,str1;
    cin>>s>>h;
    bitset <l>p(s),q(h);
    bitset <l>o=p&q;
    bitset<l>r=p|q;
    bitset<l>k=p^q;

    cout<<"AND  = "<<o<<endl;
    cout<<"OR = "<<r<<endl;
    cout<<"XOR = "<<k<<endl;
    return 0;
}
