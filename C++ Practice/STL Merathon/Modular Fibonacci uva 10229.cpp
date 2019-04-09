//#include<bits/stdc++.h>
//#include<stdio.h>
//using namespace std;
//
//#define ll long long
//
//#define sci(x) scanf("%d",&x)
//#define scl(x) scanf("%lld",&x)
//#define scd(x) scanf("%lf",&x)
//#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .
//
//#define pfi(x) printf("%d",x)
//#define pfl(x) printf("%lld",x)
//#define pfd(x) printf("%lf",x)
//#define pfc(x) printf("Case %d: ",x++)
//#define ps printf(" ")
//#define pn printf("\n")
//
//#define pb(x) push_back(x)
//#define ppb(x) pop_back(x)
//#define pf(x) push_front(x)
//#define ppf(x) pop_front(x)
//#define in(x,y) insert({x,y})
//
//#define file_read(filename)  freopen("input.txt","r",stdin);
//#define file_write(filename)  freopen("output.txt","w",stdout);
//
//#define sv(a) sort(a.begin(),a.end())
//#define sortD(a)  sort(a,a+n,greater<int>())
//#define sortA(a)  sort(a,a+n)
//#define REP(i,n) for (int i = 1; i <= n; i++)
//
//long long MOD;
//
//struct A{
//    long long arr[5][5];
//};
//
//
//A MatrixMulti(A a, A b)
//{
//    A result;
//    int i,j,k;
//    for(i=0;i<2;i++)
//        for(j=0;j<2;j++)
//        {
//            result.arr[i][j]=0;
//            for(k=0;k<2;k++)
//                result.arr[i][j]+=(a.arr[i][k]*b.arr[k][j]);
//            result.arr[i][j]=result.arr[i][j]%MOD;
//        }
//
//    return result;
//}
//
//A BigMod(A a, long long n)
//{
//    A ret;
//    int i,j;
//    for(i=0;i<2;i++)
//        for(j=0;j<2;j++)
//            {
//                if(i==j)
//                ret.arr[i][j]=1;
//                else
//                ret.arr[i][j]=0;
//            }
//
//    while(n)
//    {
//        if(n & 1)
//        {
//            ret=MatrixMulti(ret,a);
//        }
//        a=MatrixMulti(a,a);
//        n>>=1;
//    }
//    return ret;
//}
//
//int main()
//{
//    A initialMatrix,ans;
//    long long n,m,i,j;
//
//    for(i=0;i<2;i++)
//        for(j=0;j<2;j++)
//            initialMatrix.arr[i][j]=1;
//
//    initialMatrix.arr[0][0]=0;
//    while(cin>>n)
//    {
//        cin>>m;
//        MOD=pow(2,m);
//
//            if(n==0)
//            {
//                cout<<"0"<<endl;
//                continue;
//            }
//            if(n==1)
//            {
//                if(m==0)
//                cout<<"0"<<endl;
//                else
//                cout<<"1"<<endl;
//                continue;
//            }
//
//            ans=BigMod(initialMatrix,n-1);
//
//            cout<<ans.arr[1][1]%MOD<<endl;
//    }
//return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long  n,m,l,ans;
  cin>>n;
  if(n==0) {cout<<"0"<<endl; return 0;}

  else if(n&1) ans=(n+1)/2;
  else ans=n+1;

  cout<<ans<<endl;
return 0;
}
