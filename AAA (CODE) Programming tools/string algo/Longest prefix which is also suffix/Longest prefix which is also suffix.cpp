

#include <bits/stdc++.h>
using namespace std;

int longest_prefix_suffix(string str)
{
    int n=str.length();

    int lps[n];

    int len=0;int i=1;

    lps[0]=0;


    while(i<n)
    {
        if(str[len]==str[i])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
    int res=lps[n-1];

    for(int i=0;i<n;i++)
        cout<<lps[i];
    cout<<endl;

    if(res>(n/2))
        return n/2;
    else
        return res;

}


int main()
{
    string str;
    cin>>str;


    cout<<longest_prefix_suffix(str)<<endl;


    return 0;
}
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
