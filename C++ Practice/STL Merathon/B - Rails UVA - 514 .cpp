#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#include<cstdio>
#include<stack>


int main()
{
    int n, target[1000];
    int i,t;

    while (true)
    {
        cin >> n;
        if (n == 0)
            break;

        while (true)
        {
            cin >> target[0];
            if (target[0] == 0)
            {
                cout << endl;
                break;
            }
            for (i = 1; i < n; i++)
            {
                cin >> target[i];
            }

            int currCoach = 1, targetIndex = 0;
            stack<int> station;
            while(currCoach<=n)
            {
                station.push(currCoach);

                while(!station.empty() && station.top() == target[targetIndex])
                {

                    station.pop();
                    cout<<targetIndex<<" "<<target[targetIndex]<<"  "<<endl;
                    targetIndex++;
                    if(targetIndex>=n) break;
                }

                currCoach++;
            }

            if(station.empty()) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}
