#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
};
bool func(Point p, Point q) {
    if(p.x < q.x)
        return true;
    else if(p.x == q.x) {
        if(p.y < q.y)
            return true;
        return false;
    }
    else
        return false;
}
int orientation(Point p, Point q, Point r) {
	///int num = (r.x-q.x)*(q.y-p.y) - (r.y-q.y)*(q.x-p.x);  or
	int num=(((p.x*(q.y-r.y))+(q.x*(r.y-p.y))+(r.x*(p.y-q.y)))/2);
	if(num == 0)
		return 0;
	return num < 0 ? 1 : 2;
}
void helperFunc(Point arr[], int n) {
    if(n < 3) {
        cout<<-1<<endl;
        return;
    }
	vector<Point> convexHull;
	// find the smallest point in x axis
	int min = 0;
	for(int i = 1; i < n; i++) {
		if(arr[i].x < arr[min].x) {
			min = i;
			cout<<"i  = " <<arr[i].x<<" ";
		}
	}
	int p = min, q, i;
	cout<<endl<<"p = "<<p<<" "<<arr[p].x<<endl;

	do {
		convexHull.push_back(arr[p]);
		q = (p+1)%n;
		cout<<"type q = "<<q<<" "<<arr[q].x<<endl;
		for(i = 0; i < n; i++) {
			if(orientation(arr[p], arr[i], arr[q]) == 2) {
				q = i;
					cout<<"update q = "<<q<<" "<<arr[q].x<<endl;
			}
		}
		p = q;
			cout<<"After orientation Update p   "<<p<<" "<<arr[p].x<<endl;
			cout<<"Min ="<<min<<" "<<arr[min].x<<endl;
	}while(p != min);

	sort(convexHull.begin(), convexHull.end(), func);
	for(i = 0; i < convexHull.size(); i++) {
		cout<<convexHull[i].x<<" "<<convexHull[i].y;
		if(i != convexHull.size()-1) {
			cout<<", ";
		}
	}
	cout<<endl;
}
int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        Point arr[n];
        for(int i = 0; i < n; i++) {
        	cin>>arr[i].x>>arr[i].y;
        }
        helperFunc(arr, n);
    }
    return 0;
}


/*
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


struct point {
int x,y;
};

bool func(point p,point q)
{
    if(p.x<q.x) return true;
    else if( p.x==q.x){
        if(p.y<q.y)
            return true ;
        return false;
    }
    else
    return false;
}
int orientation(point p,point q,point r)
{
    int num=((r.x-q.x)*(q.y-p.y))-((r.y-q.y)*(q.x-p.x));
    if (num==0) return 0;
    return num>0 ? 1 :  2;
}

void  convexHull(point a[ ], int n)
{
    if(n<3){ cout<<"-1"<<endl; return; }

    vector<point> hull;
    int i,j,min=0;

    for(i=1;i<n;i++){
        if(a[i].x<a[min].x){
            min=i;}
    }
    int p=min,q;


   do {
        hull.push_back(a[p]);
        q=(p+1)%n;
        for(i=0;i<n;i++){
            if( orientation(a[p], a[i], a[q] )==2)
            {
                q=i;
            }
        }
        p=q;
    } while(p!=min);


sort(hull.begin(),hull.end(),func);

    for(i=0;i<hull.size();i++){
        cout<<hull[i].x<<" "<<hull[i].y;
        if(i!=hull.size()-1){ cout<<",";
        }
    }
    cout<<endl;

}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
int n,nc,t;
cin>>t;
while(t--){
cin>>n;
point a[n];
for(int i=0;i<n;i++){
cin>>a[i].x>>a[i].y;
}
convexHull(a,n);
}
}
*/

