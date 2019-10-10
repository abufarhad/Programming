
#include<bits/stdc++.h>
using namespace std;


#define pp pair<ll,ll>
#define dbg printf("xxxx");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
typedef long long int ll;


string NumberToString(int num)
{
    stringstream ss;
    ss<<num;
    return ss.str();
}

int main()
{
   int i,j,n=0,sarch,flag=0;
   string str;
   cin>>sarch;
   vector<char> v;
   for(i=1;;i++){

     str=NumberToString(i);

     for(j=0;j<str.size();j++){
        if(n==1002){
            flag=1;
            break;
        }

        v.push_back(str[j]);
        n++;


     }
     if(flag==1)
        break;
   }
   cout<<v[sarch-1]<<endl;
    return 0;
}
