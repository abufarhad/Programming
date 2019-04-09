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
//#define pfl(x) printf("%lld\n",x)
//#define pfd(x) printf("%lf",x)
//#define pfc(x) printf("Case %d: ",x)
//#define ps printf(" ")
//#define pn printf("\n")
//#define pb(x) push_back(x)
//#define ppb(x) pop_back(x)
//#define pf(x) push_front(x)
//#define ppf(x) pop_front(x)
//#define in(x,y) insert({x,y})
//
////int dx[] = {0,1,0,-1,1,1,-1,-1};
////int dy[] = {1,0,-1,0,1,-1,-1,1};
//
////i64 gcd(i64 a,i64 b){if(!b)return a;return gcd(b,a%b);}
//
//
////i64 bigmod(i64 num,i64 n){if(n==0)return 1;i64 x=bigmod(num,n/2);x=x*x%mod;if(n%2==1)x=x*num%mod;return x;}
//
////i64 modinverse(i64 num){return bigmod(num,mod-2)%mod;}
//
////i64 po(i64 a,i64 b){i64 ans=1;while(b--)ans *= a;return ans;}
//
////i64 ncr(i64 n,i64 r){if(n==r)return 1;if(r==1)return n;if(dp[n][r]!=-1)return dp[n][r];return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);}
//
//
//
//
//#define pb(x) push_back(x)
//
//#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
//#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
//
//#define file_read(filename)  freopen("input.txt","r",stdin);
//#define file_write(filename)  freopen("output.txt","w",stdout);
///// ll binarySearch( ll a[] , int l, int r, int x) { while (l <= r) {  int m = l + (r-l)/2; if (a[m] == x) return m; if (a[m] < x) l = m + 1;elser = m - 1;}}
//
//#define sv(a) sort(a.begin(),a.end())
//#define sortD(a)  sort(a,a+n,greater<int>())
//#define sortA(a)  sort(a,a+n)
//
//int main()
//{
//
//    ll m,n,t,b,i,j,k,x,ans,d;
//    string s,s2,s3;
//    string  s1[33],c[22];
//    scl(t);
//    map<ll,string>mp;
//    vector<string>v;
//
//    if(t==0)
//    {
//        printf("6\n");
//        printf("Power\n");
//        printf("Time\n");
//        printf("Space\n");
//        printf("Soul\n");
//        printf("Reality\n");
//        printf("Mind\n");
//        return 0;
//    }
//    else
//    {
//        d=6-t;
//
//        for(x=0; x<t; x++)
//        {
//            cin>>s;
//            v.push_back(s);
//        }
//
//        cout<<d<<endl;
//
//        vector<string>::iterator it;
//
//        it = std::find (v.begin(), v.end(), "red" );
//        if (it == v.end())
//        {
//            cout<<"Reality"<<endl;
//        }
//
//        vector<string>::iterator it1;
//        it1 = std::find (v.begin(), v.end(), "purple" );
//        if (it1 == v.end())
//        {
//            cout<<"Power"<<endl;
//        }
//
//        vector<string>::iterator it2;
//        it2 = std::find (v.begin(), v.end(), "green" );
//        if (it2 == v.end())
//        {
//            cout<<"Time"<<endl;
//        }
//
//        vector<string>::iterator it3;
//        it3= std::find (v.begin(), v.end(), "blue" );
//        if (it3== v.end())
//        {
//            cout<<"Space"<<endl;
//        }
//
//        vector<string>::iterator it4;
//        it4 = std::find (v.begin(), v.end(), "orange" );
//        if (it4 == v.end())
//        {
//            cout<<"Soul"<<endl;
//        }
//
//        vector<string>::iterator it5;
//        it5 = std::find (v.begin(), v.end(), "yellow" );
//        if (it5 == v.end())
//        {
//            cout<<"Mind"<<endl;
//        }
//
//    }
//
//    /* mp[Power]="purple";
//    mp[Time]="green";
//    mp[Space]="blue";
//    mp[Soul]="orange";
//    mp[Reality]="red";
//    mp[Mind]="yellow";
//
//
//    /*
//            for(i=0; i<6; i++)
//            {
//                if(c[i]=="red" || c[i]=="purple" || c[i]=="green" || c[i]=="blue" ||c[i]=="orange" && c[i]=="yellow")continue;
//                else {s1[k]="red";k++; }break;
//            }
//            for(i=0; i<6; i++)
//            {
//                if(c[i]=="purple") continue;
//                else {s1[k]="purple"; k++;}break;
//            }
//            for(i=0; i<6; i++)
//            {
//                if(c[i]=="green") continue;
//                else {s1[k]="green";k++; }break;
//            }
//            for(i=0; i<6; i++)
//            {
//                if(c[i]=="blue") continue;
//                else {s1[k]="blue"; k++; }break;
//            }
//            for(i=0; i<6; i++)
//            {
//                if(c[i]=="orange") continue;
//                else{ s1[k]="orange"; k++;} break;
//            }
//
//            for(i=0; i<6; i++)
//            {
//                if(c[i]=="yellow") continue;
//                else {s1[k]="yellow"; k++; }break;
//            }
//
//        }
//        cout<<k<<endl;
//        for(i=0; i<k; i++)
//            {
//                cout<<s1[i]<<" ";
//            }
//
//       /* mp[Power]="purple";
//    mp[Time]="green";
//    mp[Space]="blue";
//    mp[Soul]="orange";
//    mp[Reality]="red";
//    mp[Mind]="yellow";
//
//    for(i=0;i<6;i++)
//    {
//        if(s1[i]=="red") cout<<"Reality"<<endl;
//        if(s1[i]=="yellow")cout<<"Mind"<<endl;
//        if(s1[i]=="orange")cout<<"Soul"<<endl;
//        if(s1[i]=="blue")cout<<"Space"<<endl;
//        if(s1[i]=="green")cout<<"Time"<<endl;
//        if(s1[i]=="purple")cout<<"Power"<<endl;
//    }
//    */
//
//    return 0;
//}


#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld\n",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})

//int dx[] = {0,1,0,-1,1,1,-1,-1};
//int dy[] = {1,0,-1,0,1,-1,-1,1};

//i64 gcd(i64 a,i64 b){if(!b)return a;return gcd(b,a%b);}


//i64 bigmod(i64 num,i64 n){if(n==0)return 1;i64 x=bigmod(num,n/2);x=x*x%mod;if(n%2==1)x=x*num%mod;return x;}

//i64 modinverse(i64 num){return bigmod(num,mod-2)%mod;}

//i64 po(i64 a,i64 b){i64 ans=1;while(b--)ans *= a;return ans;}

//i64 ncr(i64 n,i64 r){if(n==r)return 1;if(r==1)return n;if(dp[n][r]!=-1)return dp[n][r];return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);}




#define pb(x) push_back(x)

#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)

#define file_read(filename)  freopen("input.txt","r",stdin);
#define file_write(filename)  freopen("output.txt","w",stdout);
/// ll binarySearch( ll a[] , int l, int r, int x) { while (l <= r) {  int m = l + (r-l)/2; if (a[m] == x) return m; if (a[m] < x) l = m + 1;elser = m - 1;}}

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

int main()
{

    ll m,n,t,b,i,j,k,x,ans,d;
    string s,s2,s3;
    string  s1[33],c[22];
    scl(t);
    map<ll,string>mp;
    vector<string>v;

    if(t==0)
    {
        printf("6\n");
        printf("Power\n");
        printf("Time\n");
        printf("Space\n");
        printf("Soul\n");
        printf("Reality\n");
        printf("Mind\n");
        return 0;
    }
    else
    {
        d=6-t;

        for(x=0; x<t; x++)
        {
            cin>>s;
            v.push_back(s);
        }

        cout<<d<<endl;

        vector<string>::iterator it;

        it = std::find (v.begin(), v.end(), "red" );
        if (it == v.end())
        {
            cout<<"Reality"<<endl;
        }

        vector<string>::iterator it1;
        it1 = std::find (v.begin(), v.end(), "purple" );
        if (it1 == v.end())
        {
            cout<<"Power"<<endl;
        }

        vector<string>::iterator it2;
        it2 = std::find (v.begin(), v.end(), "green" );
        if (it2 == v.end())
        {
            cout<<"Time"<<endl;
        }

        vector<string>::iterator it3;
        it3= std::find (v.begin(), v.end(), "blue" );
        if (it3== v.end())
        {
            cout<<"Space"<<endl;
        }

        vector<string>::iterator it4;
        it4 = std::find (v.begin(), v.end(), "orange" );
        if (it4 == v.end())
        {
            cout<<"Soul"<<endl;
        }

        vector<string>::iterator it5;
        it5 = std::find (v.begin(), v.end(), "yellow" );
        if (it5 == v.end())
        {
            cout<<"Mind"<<endl;
        }

    }

    return 0;
}




