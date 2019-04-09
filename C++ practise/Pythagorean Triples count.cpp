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

using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    ll T;
//scl(T);
    //while (T--) {
        ll N=1, M; scl(M);

        long long answer = 0;
        for (ll m = 2;  m <= sqrt(M); ++m)
            for (ll n = m % 2 + 1; n <m; n += 2) {
                if (gcd(m, n) != 1)
                    continue;

                ll a = min(m * m - n * n, 2 * m * n);
                ll c = m * m + n * n;
                if (c > M)
                    break;

                ll least = (N - 1) / a + 1;
                ll most = M / c;
                if (least <= most)
                    answer += most - least + 1;
            }
        pfl(answer);
   // }
}
