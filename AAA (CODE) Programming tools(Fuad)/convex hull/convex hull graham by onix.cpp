
#include <bits/stdc++.h>
#define MAX 100
#define LL long long
#define sq(x) ((x)*(x))
using namespace std ;
struct point {
    LL x, y;
} P[MAX], C[MAX], P0;

inline LL TriArea2(point a, point b, point c) {
    return (a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y));
}

inline LL sqDist(point a, point b) {
    return (sq(a.x-b.x) + sq(a.y-b.y));
}

bool comp(point a, point b) {
    if(TriArea2(P0,a,b)==0) // co linear
        return sqDist(P0,a)<sqDist(P0,b) ;

    double d1x = a.x-P0.x ; double d1y = a.y-P0.y ;
    double d2x = b.x-P0.x ; double d2y = b.y-P0.y ;
    return (atan2(d1y,d1x)-atan2(d2y,d2x))<0  ;
}

void ConvexHull(int np, int &nc) {

    int i, j, pos = 0;
    for(i=1; i<np; i++){
        if(P[i].x<P[pos].x || (P[i].x==P[pos].x && P[i].y>P[pos].y))    pos = i;
	}

    swap(P[0], P[pos]);
    P0 = P[0];

    sort(&P[1], P+np,comp);
    for(int i=0;i<num_pair;i++)
        cout<<"\n\t m :  "<<p[i].x<<" "<<p[i].y<<endl;
    C[0] = P[0] ;
    C[1] = P[1] ;
    C[2] = P[2];

    for(i=j=3; i<np; i++) {
        while(TriArea2(C[j-2], C[j-1], P[i]) <= 0)
            j--;
        C[j++] = P[i];
    }

    nc = j;
}

int main(void){
    //freopen("in.txt","r",stdin) ;
    int np,nc ;
    scanf("%lld",&np) ;
    for(int i=0;i<np;i++){
        scanf("%lld %lld",&P[i].x,&P[i].y) ;
    }
    ConvexHull(np,nc) ;
    for(int i=0;i<nc;i++){
        printf("%lld %lld\n",C[i].x,C[i].y) ;
    }

}
