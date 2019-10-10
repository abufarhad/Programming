#include<bits/stdc++.h>
using namespace std;

struct info
{
    int roll;
    int marks;
};

bool myfunction(info a,info b)
{
    return a.marks>b.marks;
}
int main()
{
    vector<info> od(3);

    od[0].roll=2;
    od[0].marks=10;

     od[1].roll=10;
    od[1].marks=14;

     od[2].roll=6;
    od[2].marks=8;

    sort(od.begin(),od.end(),myfunction);

    for(int i=0;i<od.size();i++)
        cout<<od[i].marks<<" "<<od[i].roll<<endl;

    return 0;
}
