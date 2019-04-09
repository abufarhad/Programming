#include<bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
using namespace std;

#define pb push_back
vector<int>nd[1000];
int *visited;

int main()
{
    int n,i,j,k,a,b;
    int p;
    scanf("%d %d", &n, &p);

    for(i=0; i<p; i++)
        {
            cin>>a>>b;
            nd[a].pb(b);
            nd[b].pb(a);
        }
    for(i=0;i<n-1;i++)
    {
        visited[i]=0;
    }

    printf("%d\n", cnt);
    return 0;
}
