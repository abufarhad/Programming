#include<bits/stdc++.h>
using namespace std;


int main(){
double l, a,b,c,d,f ,x,y,h,area;
int t, i,n;

cin>>t;
for(i=1;i<=t;i++){
cin>>a>>b>>c>>d;
f=fabs(a-c) ;
x=( ((a-c)/2) + ((pow(d,2)-pow(b,2))/(2*(f))) );
h=sqrt(( pow(d,2)-pow(x,2)) );
area=.5*(a+c)*h;
printf("Case %d: %.6lf",i,area);
}



//int digitCount(int number) {
//    // make an array to store whether you've seen a given digit
//    // note that there are 10 elements, one for each digit
//    // this will be conveniently indexed 0-9
//    bool digitSeen[10];
//
//    // set each seen digit
//    int count = 0;
//    while (number != 0) {
//        // get the rightmost digit with the modulo operator (%)
//        int digit = number % 10;
//        if (digitSeen[digit] == false) {
//            // only count if this is the first time we have seen it
//            ++count;
//            digitSeen[digit] = true;
//        }
//        // pop off the right-most digit by dividing by 10
//        number /= 10;
//    }
//
//    return count;
//    cout<<count;
//}
//




return 0; }

