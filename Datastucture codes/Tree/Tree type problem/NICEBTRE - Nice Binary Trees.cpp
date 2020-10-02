#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define mx 2000

char s[mx];
ll max_level=0,  indx=0;

void tree_depth(int level)
{
    indx++;
    if(level>max_level)
        max_level=level;

    if(s[indx]=='\0') return ;

    if(s[indx]=='l') return ;

    if(s[indx]=='n')
    {
        tree_depth(level+1); ///left
        tree_depth(level+1); ///rigth
    }
    return ;
}

int main()
{
    ll i, n,l;
    cin>>l;
    while(l--)
    {
        max_level=0, indx=-1;
        cin>>s;
        tree_depth(0);
        cout<<max_level<<endl;
    }
}



/*
#define ll long long
#define scl(x) scanf("%lld",&x)
char s[10000];
ll i;
int length()
{
    if(s[i++]=='l') return 1;
    else
    return max(length(),length())+1;
}

int main()
{
    ll m,n,t;

    scl(t);
    while(t--)
    {
        cin>>s;
        i=0;
        printf("%d\n",length()-1);
    }
return 0;
}
*/
