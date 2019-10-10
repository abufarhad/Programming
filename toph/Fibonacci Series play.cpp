#include<bits/stdc++.h>
using  namespace std;
#define ll long long

ll F0,F1;
ll number_of_febo(ll low,ll high)
{
    ll f0=0, f1=1, f2=1, cnt=0;
    while(f0<=high)
    {
       // cout<<f0<<" "<<f1<<endl;
        F0=f0, F1=f1;
        if(f0>=low)cnt++;
        f0=f1, f1=f2;
        f2=f0+f1;
    }
     //cout<<F0<<" "<<F1<<endl;

    return cnt;
}

int main()
{
 ll m,n,i,j,k;
 cin>>k;
 while(k--){
 cin>>n;
 ll cnt=number_of_febo(0, n);
 ll evn=cnt/3;
 ll odd=cnt-evn;
 //cout<<F0<<" "<<F1<<endl;

 if(F1%2!=0)evn++, odd--;
 cout<<evn<<" "<<odd<<endl;
 //cout<<cnt<<endl;
 }
}
