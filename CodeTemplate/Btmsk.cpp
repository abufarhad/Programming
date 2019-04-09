//#include <stdio.h>
#include <iostream>
#include <climits>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>
#include <stack>
#include <deque>
#include <vector>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <utility>
#include <queue>

using namespace std;

#define ll long long
#define ulli   unsigned ll int
#define sl(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define si(n) scanf("%d", &n)
#define ss(n) scanf("%s", n)
#define pii pair <int, int>
#define pll pair <ll, ll>
#define plp pair <int, pll >
#define pb push_back
int dp[1000000];

int n,tst,cs;
ll int info[35][35];
bool check(int x,int pos){


return  (bool)(x &(1<<pos));

}

 int st(int x,int pos){


    return x= x |(1<<pos);



}




int  Reset(int x,int pos ){

    return x= x &~(1<<pos);



}
 int  bitmask(int mask){


if(mask==(1<<n)-1){
return 0;

}
if(dp[mask]!=-1)
    return dp[mask];

ll int mn=100000000;

for (int i = 0; i < n; i++){

if(check(mask,i)==0){


int z=info[i][i];
for(int k=0;k<n;k++){


    if(check(mask,k)!=0&& i!=k){


        z+=info[i][k];
    }

}

 ll int ans=z+bitmask(st(mask,i));
mn=min(ans,mn);
}


}

return  dp[mask]=mn;


}



int main()
{

si(tst);
cs=1;
while(cs<=tst){


si(n);

memset(dp,-1,1000000);
for (int i = 0; i < n; i++)
{

for (int k=0;k<n;k++){


    cin>>info[i][k];
}
}



printf("Case %d: %d\n",cs,bitmask(0));

cs++;
}
}
