# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
using namespace std;

class Graph
{
    vector< vector<int> > Edge;
    vector<unsigned char> visited; //We can use vector<bool>, but it's slow and broken :( , CPP's byte array http://stackoverflow.com/questions/10077771/what-is-the-correct-way-to-deal-with-medium-sized-byte-arrays-in-modern-c
public:

    Graph(int V)
    {
        Edge.resize(V);
        visited.resize(V);
    }

    void add_edge(int v,int w)
    {
        Edge[v].push_back(w);
    }

    void BFS(int s)
    {
        int i;
        for(auto i : visited) i = false;
        list<int> q;
        visited[s] = true;
        q.push_back(s);
        while (!q.empty())
        {
            s = q.front();
            cout<<s<<" ";
            q.pop_front();
            for(auto i : Edge[s])
            {
                if(!visited[i])
                {
                    visited[i] = true;
                    q.push_back(i);
                }
            }
        }

    }

};

int main()
{
    Graph g(6);
    g.add_edge(0,1);
    g.add_edge(0,2);
    g.add_edge(1,2);
    g.add_edge(2,0);
    g.add_edge(2,3);
    g.add_edge(3,3);
    int v;
    cout<<"Enter vertex from where to perform BFS"<<endl;
    cin>>v;
    g.BFS(2);
cout<< (char)true;
}

/*
#include <bits/stdc++.h>
using namespace std;

typedef long long int ull;
#define MAX_CHAR 256

ull print(ull n, ull w, vector<ull> values, vector<ull> weights) {
    ull K[n+1][w+1];
    for(ull i=0; i<=n; i++) {
        for(ull j = 0; j <= w; j++) {
            if(i == 0 || w == 0)
                K[i][j] = 0;
            else if(weights[i - 1] <= j)
                K[i][j] = max(values[i-1] + K[i-1][j - weights[i-1]], K[i-1][j]);
            else
                K[i][j] = K[i-1][j];
        }
    }
    return K[n][w];
}


int main() {
	int t;
	cin>>t;
     One by one run for all input test cases
    while (t--)
    {
        ull n, w;
        vector<ull> values, weights;
        cin>>n>>w;
        for(ull i = 0; i < n; i++) {
            ull temp;
            cin>>temp;
            values.push_back(temp);
        }
        for(ull i = 0; i < n; i++) {
            ull temp;
            cin>>temp;
            weights.push_back(temp);
        }
        cout<<print(n, w, values, weights)<<endl;
    }
    return 0;
}
*/
