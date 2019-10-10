#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define dbug printf("I am here\n");
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int maxn = 1e3+100;
const int mx = 5e5;

int trie[mx][26];
int cnt = 1;
const ll inf = 1e18;
char str[maxn];
int raw[maxn][maxn];
int n, m;

void Insert(int ind, int root)
{
    int depth = 1;
    for(int i = ind; i<=n; i++)
    {
        int ch = str[i] - 'a';
        // cout << str[i];
        if(trie[root][ch] == 0)
        {
            raw[ind][depth] = 1;
            trie[root][ch] = cnt++;
        }
        root = trie[root][ch];
        depth++;
    }
}

int query(int l, int r, int L, int R)
{
    int ans = raw[l][R] - raw[l][L-1];
    int bad = raw[r+1][R] - raw[r+1][L-1];
    return (ans-bad);
}

int main()
{
    scanf("%d %d",&n,&m);
    scanf("%s", str+1);

    for(int i = n; i>=1; i--)
    {
        Insert(i, 0);
    }

    for(int i = 1; i<=n; i++)
    {
        for(int j = n-1; j>=1; j--)
        {
            raw[j][i] = raw[j][i] + raw[j+1][i];
        }
        for(int j = n-1; j>=1; j--)
        {
            raw[j][i] = raw[j][i] + raw[j+1][i];
        }
    }


    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            raw[i][j] = raw[i][j] + raw[i][j-1];
        }
    }

    while(m--)
    {

        int l, r, L, R;
        scanf("%d%d%d%d",&l,&r,&L,&R);
        printf("%d\n",query(l,r,L,R));

    }


}
