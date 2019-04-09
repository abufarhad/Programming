#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

const int MAX = 50005;
int A[MAX][26];
int main()
{

    int queries, len, left, right, k, x, K;
    string str;
    char ans;


    cin >> len >> queries >> str;

    str = "0" + str;        // Indexing is starts from 1

    // Preprocessing : Calculating prefix sum
    for(int i = 1; i <= len; ++i)
    {
        x = str[i] - 'a';
        // Counting Frequencies of each character in the prefix of str
        for(int j = 0; j < 26; ++j)
            if(j == x) A[i][j] = A[i-1][j] + 1;
            else A[i][j] = A[i-1][j];
    }
/*
    for(int i=1; i<=len; i++){
        for(int j=0; j<26; j++){
            cout<<A[i][j]<<" ";}
                cout<<endl;}
*/
    // Queries
    for(int i = 0, j; i < queries; ++i)
    {
        cin >> left >> right >> k;

        // Counting the Kth smallest character
        K = 0;
        for(j = 0; j < 26; ++j)
        {
           // cout<<A[right][j] <<" <-"<<right<<j<<" "<<left-1<<j<<"-> "<<A[left-1][j]<<endl;
            K += A[right][j] - A[left-1][j];
         //   cout<<"K ->"<<K<<" "<<endl;
            if(K >= k)
                break;
        }
       // cout<<"j= "<<j<<endl;
        ans = 'a' + j;
        if(j == 26) cout << "Out of range" << endl;
        else cout << ans << endl;

    }
}
