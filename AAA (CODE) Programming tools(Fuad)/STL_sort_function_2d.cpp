#include<bits/stdc++.h>
using namespace std;
struct Point{
    int x;
    int y;



};
 bool operator<(Point A,Point B){

        if(A.x!=B.x) return A.x<B.x;

        return A.y<B.y;
    }
//
//bool cmp(Point A,Point B){
//
//    if(A.x!=B.x) return A.x<B.x;
//vvvvv
//    return A.y<B.y;
//}
int main()
{
    int n;
    cin>>n;
    struct Point point[100];
    for(int i=0;i<n;i++){
        cin>>point[i].x>>point[i].y;
    }

    sort(point,point+n);
    cout<<"\n\n................\n"<<endl;
    for(int i=0;i<n;i++){
        cout<<point[i].x<<" "<<point[i].y<<endl;
    }
    return 0;
}
