#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>
#include<string.h>
#define MAXX 1000005
int f[MAXX];
string txt, pattern;

void pattern_precalc(string  & pattern, int len_p)
{
    int k=1,len=0,m;
    f[0]=0;
    while(k<len_p)
    {
        if(pattern[k]==pattern[len])
        {
            f[k++]=++len;

        }
        else
        {
            if(len)
                len=f[len-1];
            else
                f[k++]=0;
        }
    }

}
int kmp(string  &txt, string  & pattern)
{
    int i=0,j=0,cnt=0;
    int len_t=txt.size();

    int len_p=pattern.size();
    pattern_precalc(pattern,len_p);
    while(i<len_t)
    {
        if(txt[i]==pattern[j])
        {
            i++;
            j++;
            if(j==len_p)
            {
                cnt++;
                j=f[j-1];
            }
        }
        else
        {
            if(j)
                j=f[j-1];
            else
                i++;
        }
    }
    return cnt;
}

int main()
{
    int T,a;
    scanf("%d",&T);
    for(a=1; a<=T; a++)
    {
       cin>>txt>>pattern;
        //pattern=

        printf("Case %d: %d\n",a,kmp(txt,pattern));
    }
    return 0;
}

