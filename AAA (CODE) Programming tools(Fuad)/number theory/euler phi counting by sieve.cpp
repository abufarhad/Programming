#include<bits/stdc++.h>
using namespace std;

bitset<1000000>bs;

int main()
{
    int num;

    cin>>num;
    bs.set();



    for(int i=2;i<num;i++){
        if(num%i==0){
            bs[i]=0;
            for(int j=i*i;j<num;j+=i)
                bs[j]=0;
        }
    }

    int kount=0;

    cout<<"the co-prime are : ";
    for(int i=1;i<num;i++)
    {
        if(bs[i]==1){
            kount++;
            cout<<i<<" ";
        }

    }

    cout<<"\n\nNumber of positive co-prime below "<<num<<" : ";
    cout<<kount<<endl;


    return 0;
}
