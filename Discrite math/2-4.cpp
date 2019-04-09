#include<bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    int a,m,n,b,i,j,k;
    cin>>n; int x[n], cnt=0;
    for(i=1;i<=n;i++){
        x[i]=i*i;
        cout<<x[i]<<" ";

    }
    for(i=1;i<=n-1;i++){
            if(x[i]==x[i+1]) cnt++;
    }
    printf("%d",cnt);
    if(cnt>0){ printf(" This function is not one -to-one ");}
    else printf("This function is one -to-one");
    return 0;
}

