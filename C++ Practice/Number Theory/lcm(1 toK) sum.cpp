#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MOD = 1e9 + 7;
std::vector<long long> vec;
int main(){
	long long n, k; cin >> n >> k;


	for(int i = 1; i * i <= k; i++){
		if(k % i) continue;
		vec.push_back(i);
		vec.push_back(k / i);
	}
	sort(rbegin(vec), rend(vec));

	long long ans = 0;

	std::vector<long long> S(vec.size(), 0);
	for(int i = 0; i < vec.size(); i++){
		{
			long long r = n / vec[i] * vec[i];
			S[i] = (vec[i] + r) * (n / vec[i]) / 2;
		}

		for(int j = 0; j < i; j++){
			if(vec[j] % vec[i]) continue;
			S[i] = (S[i] - S[j]);
		}

		ans = (ans + S[i] / vec[i]) % MOD;
	}

	cout << ans * k % MOD << endl;
	return 0;
}
/*
long long int MOD = 1e9 + 7;

ll gcd(ll a,ll b)
{
    return a==0?b: gcd(b%a,a);
}

ll solve(ll n,ll k)
{
            ll ans = 0,i;
            for ( i = 1; i <= k; i++) {
                if (i > n) break;

                long start = i;
                long last = k * ((n - i) / k) + i;
                long m = (last - start) / k + 1;
                long sum = ((start + last) * m / 2) % MOD;
                long tmp = (sum * k / gcd(i, k)) % MOD;
                ans = (ans + tmp) % MOD;
            }

           cout<<ans<<endl;
        }


int main(){
	long long n, k;
    cin >> n >> k;

	solve(n,k);
	return 0;
}
*/
