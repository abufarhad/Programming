#include<bits/stdc++.h>
using namespace std;
const size_t l=6;

int main()
{
    int a = 12, b = 25;
    string s,h,str,str1;
    cin>>s>>h;
    bitset <l>p(s),q(h);
    bitset <l>o=p&q;
    bitset<l>r=p|q;
      bitset<l>k=p^q;

    cout<<" AND"<<o;
    cout<<" AND"<<r;
    cout<<" AND"<<k;
   // str1=h-'0';
  //  printf("Output = %d", a&b);
    //printf("Output = %d", s&h);
    return 0;
}
