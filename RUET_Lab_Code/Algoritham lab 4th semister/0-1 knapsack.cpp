#include <bits/stdc++.h>
using namespace std;

typedef long long int ull;
#define MAX_CHAR 256

ull print(ull n, ull w, vector<ull> values, vector<ull> weights) {
    ull K[n+1][w+1];
    for(ull i=0; i<=n; i++) {
        for(ull j = 0; j <= w; j++) {
            if(i == 0 || w == 0)  K[i][j] = 0;

            else if(weights[i - 1] <= j)
                K[i][j] = max(values[i-1] + K[i-1][j - weights[i-1]], K[i-1][j]);
            else
                K[i][j] = K[i-1][j];
        }
    }
    return K[n][w];
}


int main() {
	int t;
	cin>>t;

    while (t--)
    {
        ull n, w;
        vector<ull> values, weights;
        cin>>n>>w;
        for(ull i = 0; i < n; i++) {
            ull temp;
            cin>>temp;
            values.push_back(temp);
        }
        for(ull i = 0; i < n; i++) {
            ull temp;
            cin>>temp;
            weights.push_back(temp);
        }
        cout<<print(n, w, values, weights)<<endl;
    }
    return 0;
}

