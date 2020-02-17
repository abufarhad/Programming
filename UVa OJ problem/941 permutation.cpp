#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main() {
int cases;
unsigned long long n;
string input;
unsigned long long tmp = 1;

ll f[21]={0};
f[0]=1;
for (ll i = 1; i < 20; i++)
{
    tmp *= i;
    f[i] = tmp;
}
cin >> cases;

while (cases--)
{
    cin >> input >> n;
    n++;

    sort(input.begin(), input.end());

    for (int i = 0, sz = input.size(); i < sz; i++)
    {
        int next = 0;
        cout<<f[input.size() - 1] <<" -- "<< n<<endl;
        while (f[input.size() - 1] < n)
        {
            n -= f[input.size() - 1];
            next++;
        }
        cout << input[next];
        input.erase(input.begin() + next);
    }

    //cout << endl;
}

return 0;
}
