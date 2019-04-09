//#include <cstdlib>
#include <iostream>
using namespace std;
//member function
int main() {
int a[6]= {5,4,3,2,1,0};
int Min=a[1],loc=1,j;
for(j=a[2];j<a[6];j++){
if(Min>a[j])
    cout<<"min :="<<a[j]<<"loc="<<j;
}
 return 0;
}//end of main
