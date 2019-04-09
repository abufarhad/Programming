//#include<bits/stdc++.h>
//#include<stdio.h>
//using namespace std;
//
//#define ll long long
//
//#define sci(x) scanf("%d",&x)
//#define scl(x) scanf("%lld",&x)
//#define scd(x) scanf("%lf",&x)
//#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .
//
//
//
//
//
////ll bfs(char a[n][n])
////{
//
//
//   class item
//    {
//    public:
//        int r;
//        int c;
//        int dist;
//        item( ll p, ll q, ll d)
//            : r(p), c(q), dist(d)
//        {
//        }
//    };
//
//int main()
//{
//    ll i,j;
//    ll x2,y2,x,y,d;
//    ll n,m;
//
//    scl(n);
//
//    char a[n][n];
//
//
//    for(i=0; i<n; i++)
//    {
//        for(j=0; j<n; j++)
//        {
//            cin>>a[i][j];
//        }
//    }
//
//    cin>>x>>y>>x2>>y2;
//
//
//
//    item src(0,0,0);
//    bool visited[n][m];
//
//    for(ll i=0; i<n; i++)
//    {
//        for(ll j=0; j<n; j++)
//        {
//            if(a[i][j]=='x') visited[i][j]=true;
//            else visited[i][j]=false;
//
//            if(a[i][j]==a[x][y])
//            {
//                src.r=i;
//                src.c=j;
//            }
//        }
//    }
//
//    queue<item>q;
//    q.push(src);
//
//    visited[src.r][src.c]=true;
//
//    while(!q.empty())
//    {
//        item p=q.front();
//        q.pop();
//
//        if(a[p.r][p.c]==a[x2][y2])
//            cout<<p.dist<<endl;
//
//        /// moving up
//        if(p.r-1>=0 && visited[p.r-1][p.c]==false)
//        {
//            q.push(item(p.r-1, p.c,p.dist+1) );
//            visited[p.r-1][p.c]=true;
//        }
//
//        /// moving down
//        if(p.r+1<n && visited[p.r+1][p.c]==false)
//        {
//            q.push(item(p.r+1, p.c,p.dist+1) );
//            visited[p.r+1][p.c]=true;
//        }
//
//        /// moving left
//        if(p.c-1>=0 && visited[p.r][p.c-1]==false)
//        {
//            q.push(item(p.r, p.c-1,p.dist+1) );
//            visited[p.r][p.c-1]=true;
//        }
//
//        /// moving right
//        if(p.c+1<n && visited[p.r][p.c+1]==false)
//        {
//            q.push(item(p.r, p.c+1,p.dist+1) );
//            visited[p.r][p.c+1]=true;
//        }
//    }
//
//
////   cout<<bfs(a)<<endl;
//return 0;
//
//}
//



// C++ Code implementation for above problem
#include <bits/stdc++.h>
using namespace std;

#define N 4
#define M 4

// QItem for current location and distance
// from source location
class QItem {
public:
    int row;
    int col;
    int dist;
    QItem(int x, int y, int w)
        : row(x), col(y), dist(w)
    {
    }
};



// Driver code
int main()
{


    int  i,j;
    int x2,y2,x,y,d, n,m;

    cin>>n;
    char grid[n][n];


    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>grid[i][j];
        }
    }

    cin>>x>>y>>x2>>y2;

    QItem source(x, y, 0);

    // To keep track of visited QItems. Marking
    // blocked cells as visited.
    bool visited[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 'x')
                visited[i][j] = true;
            else
                visited[i][j] = false;

            // Finding source
            if (grid[i][j] == grid[x][y])
            {
               source.row = i;
               source.col = j;
            }
        }
    }

     // applying BFS on matrix cells starting from source
    queue<QItem> q;
    q.push(source);
    visited[source.row][source.col] = true;

    while (!q.empty()) {
        QItem p = q.front();
        q.pop();

        // Destination found;
        if (grid[p.row][p.col] == grid[x2][y2]){
            cout<< "p "<<p.dist;}

        // moving up
        if (p.row - 1 >= 0 &&
            visited[p.row - 1][p.col] == false) {
            q.push(QItem(p.row - 1, p.col, p.dist + 1));
            visited[p.row - 1][p.col] = true;
        }

        // moving down
        if (p.row + 1 < n &&
            visited[p.row + 1][p.col] == false) {
            q.push(QItem(p.row + 1, p.col, p.dist + 1));
            visited[p.row + 1][p.col] = true;
        }

        // moving left
        if (p.col - 1 >= 0 &&
            visited[p.row][p.col - 1] == false) {
            q.push(QItem(p.row, p.col - 1, p.dist + 1));
            visited[p.row][p.col - 1] = true;
        }

         // moving right
        if (p.col + 1 < n &&
            visited[p.row][p.col + 1] == false) {
            q.push(QItem(p.row, p.col + 1, p.dist + 1));
            visited[p.row][p.col + 1] = true;
        }
    }


    return 0;
}

