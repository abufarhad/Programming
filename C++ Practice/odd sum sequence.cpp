#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
    int sum=0,m=10000;
    for(int i=0;i<n;i++){
    	if(v[i] > 0){
    		sum += v[i];
    	}
    	if(v[i]%2!=0){
    		m = min(m,abs(v[i]));
    	}
    }
    if(sum%2 == 0) sum-=m;
	cout << sum << endl;
	return 0;
}


