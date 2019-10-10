
#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("xxxx");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    int m,n;
    cin>>n>>m;

    int flag=1;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=1;j<=m;j++)
                cout<<"#";
            cout<<endl;
        }
        else{
            if(flag==1){
                for(int j=1;j<m;j++)
                    cout<<".";
                cout<<"#"<<endl;
                flag=0;
            }
            else{
                cout<<"#";
                for(int j=1;j<m;j++)
                    cout<<".";
                cout<<endl;
                flag=1;
            }
        }
    }

    return 0;
}

