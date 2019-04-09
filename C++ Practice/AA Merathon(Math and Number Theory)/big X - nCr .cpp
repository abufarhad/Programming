#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Mod 142857

const int Maxn = 1e6 + 1 ;//,Mod = 1e9 + 7;

ll mod(ll x, ll p) {
    x %= p;
    if (x < 0)
        x += p;
    return x;
}

ll inverse(ll x, ll p) {
    x = mod(x, p);
    if (x == 1)
        return x;
    return mod(1LL * (-p / x) * (inverse(p % x, p)) , p);
}


ll NcR(ll n, ll r) {

int fact[Maxn] ,i;
fact[0]=1;
for( i = 1; i < Maxn; i++) {
    fact[i] =  1* fact[i - 1] * i % Mod;
}

int ifact[Maxn];
ifact[0] = 1;
for(int i = 1; i < Maxn; i++) {
	  ifact[i] = 1 * ifact[i - 1] * inverse(i, Mod) % Mod;
}
    int ret = (1 *ifact[n - r] * ifact[r]) % Mod ;
	ret = (1 * ret * fact[n]) % Mod;
    return ret;
}

int main(){
ll n,c,r;
    cin>>n>>c;
 	cout << NcR(n,r) << endl;
}

//#include<bits/stdc++.h>
//using namespace std;
//
//#define ll long long
//#define INF 1000000007
//
//ll f[100001];
//
//ll pow(ll a, ll b, ll MOD)
//{
// ll x=1,y=a;
// while(b > 0)
// 	{
// 		if(b%2 == 1)
// 	{
// 		x=(x*y);
// 		if(x>MOD) x%=MOD;
// 	}
// 	y = (y*y);
// 	if(y>MOD) y%=MOD;
// 	b /= 2;
// 	}
// return x;
//}
//
///* Modular Multiplicative Inverse
// Using Euler's Theorem
// a^(phi(m)) = 1 (mod m)
// a^(-1) = a^(m-2) (mod m) */
//ll InverseEuler(ll n, ll MOD)
//{
// return pow(n,MOD-2,MOD);
//}
//
//ll C(ll n, ll r, ll MOD)
//{
//
// return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
//}
//
//int main(){
//    ll n,c;
//    cin>>n>>c;
//	f[0] = 1;
//	for(int i = 1 ; i <= 100000 ; i++)
//		f[i] = (f[i-1]*i)%INF;
// 	cout << C(n,c,INF) << endl;
//}
