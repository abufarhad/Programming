#include<bits/stdc++.h>
using namespace std;

int digitCount(int number) {
    // make an array to store whether you've seen a given digit
    // note that there are 10 elements, one for each digit
    // this will be conveniently indexed 0-9
    bool digitSeen[10];

    // set each seen digit
    int count = 0;
    while (number != 0) {
        // get the rightmost digit with the modulo operator (%)
        int digit = number % 10;
        if (digitSeen[digit] == false) {
            // only count if this is the first time we have seen it
            ++count;
          //  digitSeen[digit] = true;
        }
        // pop off the right-most digit by dividing by 10
        number /= 10;
    }

    return count;
    cout<<count<<endl;
}



int main(){
    //int digitCount(int );
int n,num,cnt,b,i;
bool digitseen[10];
cin>>n;
for(i=0;i<n;i++){
    cin>>num;
    digitCount(num);

}
return 0 ;
}
