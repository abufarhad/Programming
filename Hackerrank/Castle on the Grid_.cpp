
///             **** Incomplete***

#include <bits/stdc++.h>
using namespace std;

#define N 4
#define M 4

 //QItem for current location and distance
 //from source location
class QItem
{
public:
    int row;
    int col;
    int dist;
    QItem(int x, int y, int w)  : row(x), col(y), dist(w)
    {
    }
};

int main()
{
    int  i,j;
    int x2,y2,x,y,d, n,m, cnt=0;

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

     //To keep track of visited QItems. Marking
     //blocked cells as visited.
    bool visited[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 'x')
                visited[i][j] = true;
            else
                visited[i][j] = false;

//             Finding source
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
    bool found=false;

    while (!q.empty() && found==false)
    {
        QItem p = q.front();
        q.pop();

        // Destination found;
        if(p.row==x2 && p.col==y2)
        {
            //cout<< "p "<<p.dist;
            //cout<<p.dist<<endl;
            found=true;
            break;
        }

      //   moving up
        if (p.row - 1 >= 0 && visited[p.row - 1][p.col] == false)
        {
            q.push(QItem(p.row - 1, p.col, p.dist + 1));
            visited[p.row - 1][p.col] = true;
        }

         //moving down
        if (p.row + 1 < n && visited[p.row + 1][p.col] == false)
        {
            q.push(QItem(p.row + 1, p.col, p.dist + 1));
            visited[p.row + 1][p.col] = true;
        }

        // moving left
        if (p.col - 1 >= 0 &&  visited[p.row][p.col - 1] == false)
        {
            q.push(QItem(p.row, p.col - 1, p.dist + 1));
            visited[p.row][p.col - 1] = true;
        }

        // moving right
        if (p.col + 1 < n && visited[p.row][p.col + 1] == false)
        {
            q.push(QItem(p.row, p.col + 1, p.dist + 1));
            visited[p.row][p.col + 1] = true;
        }

        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}



