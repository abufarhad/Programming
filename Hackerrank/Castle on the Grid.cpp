#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)

static const int FREE = 0x1;
static const int BLOCKED = 0x02;
static const int FLAGGED = 0x8000;

struct Qitem
{
    int x, y;
    Qitem(int _x, int _y) : x(_x), y(_y)
    {}
};

int main()
{
    int n;
    cin >> n;
    int grid[n][n];
    char sym;

    fr(i,n)fr(j,n)
    {
        cin >> sym;
        grid[j][i] = sym == '.' ? FREE : BLOCKED;
    }

    int start_x, start_y, finish_x, finish_y;
    cin >> start_y >> start_x >> finish_y >> finish_x;

    if (start_x == finish_x && start_y == finish_y)return 0;

    // steps queue
    queue<Qitem> path;
    int steps = -1;
    path.push(Qitem(start_x, start_y));

    grid[start_x][start_y] = FLAGGED;
    int levels = 1;
    bool found = false;

    while (!found)
    {
        for (int i=0; i<levels; i++)
        {
            Qitem pos = path.front();
            path.pop();

            if (pos.x == finish_x && pos.y == finish_y)
            {
                found = true;
                break;
            }

            // try steps in all directions we haven't tried yet
            int shift = pos.y - 1;

            // up
            while (shift >= 0)
            {
                if (grid[pos.x][shift] == FREE)
                {
                    grid[pos.x][shift] = FLAGGED;
                    path.push(Qitem(pos.x, shift));

                }
                else if (grid[pos.x][shift] == BLOCKED)
                    break;
                shift--;
            }


            // down
            shift = pos.y + 1;
            while (shift < n)
            {
                if (grid[pos.x][shift] == FREE)
                {
                    grid[pos.x][shift] = FLAGGED;
                    path.push(Qitem(pos.x, shift));
                }
                else if (grid[pos.x][shift] == BLOCKED)
                    break;
                shift++;
            }

            // left
            shift = pos.x - 1;
            while (shift >= 0)
            {
                if (grid[shift][pos.y] == FREE)
                {
                    grid[shift][pos.y] = FLAGGED;
                    path.push(Qitem(shift, pos.y));
                }
                else if (grid[shift][pos.y] == BLOCKED)
                    break;
                shift--;
            }

            // right
            shift = pos.x + 1;
            while (shift < n)
            {
                if (grid[shift][pos.y] == FREE)
                {
                    grid[shift][pos.y] = FLAGGED;
                    path.push(Qitem(shift, pos.y));
                }
                else if (grid[shift][pos.y] == BLOCKED)
                    break;
                shift++;
            }
        }

        levels = path.size();
        steps++;
    }

    printf("%d\n", steps);

    return 0;
}
