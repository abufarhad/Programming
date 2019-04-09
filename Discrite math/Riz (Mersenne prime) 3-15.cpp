#include<bits/stdc++.h>
using namespace std;
//void isprime();
//bool isPrime = true;
int main(){
int i=2,n,m,j,d,c=0;
printf("Enter a number for cheaking \n");
cin>>m;
while (pow(2, i) < m) i++;
	if ((pow(2, i) - 1) == m)
        printf("YES it is mersenne prime");
else printf("No");
}
//void isprime(int n){
//int n,i,j;
//  //cout << "Enter a positive integer: ";
//  //cin >> n;
//  for(int i= 2; i <= n / 2; ++i) {
//      if(n % i == 0){
//          isPrime = false;
//          break;}}
//  if (isPrime)
//    return  ;
//}
//}
//
//
