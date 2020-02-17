#include<bits/stdc++.h>
using namespace std;
#define ll long long

void genpowerset(string s, ll id, string now)
{
    ll sz=s.size();
    if(id==sz)
    {
        cout<<now<<endl;
        return;
    }

    genpowerset(s, id+1, now+s[id]);
    genpowerset(s, id+1, now);
}

void possibleSubsets(ll a[], int N)
{
    for(int i = 0;i < (1 << N); ++i)
    {
        for(int j = 0;j < N;++j)
        {
            ll tmp=i & (1 << j);
            //cout<<"tmp "<<tmp<<endl;
            if(i & (1 << j)) cout << a[j] << " , ";
    }
        cout << "===="<<endl;
}
}


int main()
{
    ll i,j,k;
    //string s;
    ll n;
    while(cin>>n)
    {
        string now;
        ll a[n];
        //genpowerset(s, 0, now);
        for(i=0;i<n; i++)cin>>a[i];

        possibleSubsets(a, n);
    }
}
