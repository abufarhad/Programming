#include<bits/stdc++.h>
#include<utility>
#include<stack>

#define loop(n) for(int i=0; i<n; i++)

using namespace std;

class solution
{
public:

    void mediater()
    {
        list<int> *l;
        int n;
        int e;
        int j;
        pair<int, int> *p;
        int *topo;
        list<int>::iterator it;
        printf("Enter the number of vertices\t");
        scanf("%d", &n);
        printf("\n");
        l=input(n);
        printf("Enter the number of undirected vertices\t");
        scanf("%d", &e);
        printf("\n");
        p=inputundir(e);
        topo=toposort(l, n);
        loop(e)
        {
            for(j=0; j<n; j++)
                if(topo[j]==p[i].first)
                    break;
            for(j+1; j<n; j++)
                if(topo[j]==p[i].second)
                    break;
            if(j!=n)
                    l[p[i].first].push_back(p[i].second);
            else l[p[i].second].push_back(p[i].first);
        }
        loop(n)
        {
            printf("%d", i);
            for(it=l[i].begin(); it!=l[i].end(); it++)
                printf("-->%d", *it);
            printf("\n");
        }
    }

    int *toposort(list<int> *l, int n)
    {
        int *topo;
        stack<int> s;
        bool *vis;
        int temp;
        vis=new bool[n];
        loop(n)
            vis[i]=0;
        topo=new int[n];
        loop(n)
            if(!vis[i])
                topoutil(l, vis, i, s);
        loop(n)
        {
            temp=s.top();
            s.pop();
            topo[i]=temp;
        }
        return topo;
    }

    void topoutil(list<int> *l, bool *vis, int curr, stack<int> &s)
    {
        list<int>::iterator it;
        vis[curr]=1;
        for(it=l[curr].begin(); it!=l[curr].end(); it++)
            if(!vis[*it])
                topoutil(l, vis, *it, s);
        s.push(curr);
    }

    pair<int, int> *inputundir(int e)
    {
        pair<int, int> *p;
        int x;
        int y;
        p=new pair<int, int> [e];
        loop(e)
        {
            printf("Enter the 2 vertices\t");
            scanf("%d", &x);
            scanf("%d", &y);
            p[i]=make_pair(x, y);
        }
        return p;
    }

    list<int> *input(int n)
    {
        list<int> *l;
        int e;
        int x;
        int y;
        printf("Enter the number of edges\t");
        scanf("%d", &e);
        printf("\n");
        l=new list<int> [n];
        loop(e)
        {
            printf("Enter the source and destination vertex\t");
            scanf("%d", &x);
            scanf("%d", &y);
            printf("\n");
            l[x].push_back(y);
        }
        return l;
    }
};

int main()
{
    solution s;
    s.mediater();
