#include<bits/stdc++.h>
using namespace std;

#define inf 1 << 28
#define mem(a)          memset(a, -1, sizeof(a))
int mat[][10] =
{
    { -1, 2, 5 },
    { 4, -2, 3 },
    { 1, 2, 10, }
};

int dp[10][10];
int r = 3, c = 3;
int call(int i, int j)
{
    if (i >= 0 && i < r and j >= 0 and j < c) //if still inside the array
    {
        //cout<<"ini = "<<i<<" "<<j<<endl;
        if (dp[i][j] != -1)  return dp[i][j];
        int ret = -inf;
        //try to move to 3 direction,also add current cell's point
        ret = max(ret, call(i + 1, j) + mat[i][j]);
        //cout<<"ret1 "<<ret<<" "<<i<<" "<<j<<" "<<mat[i][j]<<endl;
        ret = max(ret, call(i + 1, j - 1) + mat[i][j]);
        //cout<<"ret2 "<<ret<<" "<<i<<" "<<j<<" "<<mat[i][j]<<endl;
        ret = max(ret, call(i + 1, j + 1) + mat[i][j]);
        //cout<<"ret3 "<<ret<<" "<<i<<" "<<j<<" "<<mat[i][j]<<endl;
        return dp[i][j] = ret;
    }
    else
        return 0; //if outside the array
}
int main()
{
    // READ("in");
    mem(dp);
    printf("%d\n", call(0, 0));
    return 0;
}
