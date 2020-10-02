#include<bits/stdc++.h>
//#include<stdio.h>
//#include<time.h>
using namespace std;
//
//#define ll long long
//
//#define sci(x) scanf("%d",&x)
//#define scl(x) scanf("%lld",&x)
//#define scd(x) scanf("%lf",&x)
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
//#define sv(a) sort(a.begin(),a.end())
//#define NIL -1
//#define MAX 100
//
/////BY mamoization way( Top down )
//int lookup[MAX];
//int initialize( )
//{
//    for(int i=0; i<MAX; i++)
//    {
//        lookup[i]=NIL;
//    }
//}
//
//int febo( int n)
//{
//    if(lookup[n]==NIL)
//    {
//
//        if(n<=1) lookup[n]= n;
//        else
//            lookup[n]= febo(n-1)+febo(n-2);
//    }
//    return lookup[n];
//}
//
//int main()
//{
//    //freopen("input.txt","r",stdin);
//    //freopen("output.txt","w",stdout);
//
//
//int n=40;
//    clock_t begin, end;
//
//double time_spent;
//initialize();
//
//begin = clock();
//
//printf("%d\n", febo(n));
//
//end = clock();
//time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//
//printf("\nTime Taken %lf ", time_spent);
//
////getchar();
//
//    return 0;
//}
//
/////By Tabulation way( Bottom up )
//
////int febo(int n)
////{
////    int i,m,f[n+1];
////    f[0]=0,f[1]=1;
////    for(i=2; i<=n; i++)
////    {
////        f[i]=f[i-1]+f[i-2];
////    }
////    return f[n];
////}
//
/////Recursive way
//
////int febo(int n){
////if(n<=1) return n;
////else return febo(n-1)+febo(n-2);
////}
//
//
//



int main() {
	//code
	int t,n,k;
	scanf("%d",&t);
	while(t--){
	 scanf("%d",&n);

int k=	n-(n/2)-(n/3)-(n/5)-(n/7)+(n/6)+(n/10)+(n/14)+(n/15)+(n/21)+(n/35)-(n/30)-(n/42)-(n/70)-(n/105)+(n/210);
printf("%d\n",k);
}
return 0;
}
