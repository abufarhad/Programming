#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll two,three,five,six;
    cin>>two>>three>>five>>six;
    ll num_of_256=0,num_of_32=0;

    if(two>0 && five>0 && six>0){
            num_of_256=min(five,six);
            num_of_256=min(two,num_of_256);
            two=two-num_of_256;

    }

    if(two>0 && three>0){
        num_of_32=min(two,three);
    }
    ll result;
    result=(num_of_256*256)+(num_of_32*32);
    cout<<result<<endl;
    return 0;
}
