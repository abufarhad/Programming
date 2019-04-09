#include<bits/stdc++.h>
using namespace std;
int main(){
long long i,m,n,l; int cc=0,ccc=0,cm=0,co=0,cnt=0,cn=0;
int f,g,h,k,o,u,s;// cin>>l;
//while(l--){   cin>>number;
//m=divisors(number);
//    m=(n*(n+1))/2;
 //   cout<<m;   }}
cin>>n;
		for(i=2;i<=(long long int)sqrt(n);i++) {
			while(n % i == 0) {
				printf("%lld ",i);
				n /= i;
				if(i==2) cnt++;
				if(i==3) cn++;
				if(i==5)co++;
				if(i==7) cm++;
				if(i==11) cc++;
				if(i==13) ccc++;  }}
		//if (n > 1)
            printf("%lld",n);
            if(n!=1){ u=2;} else u=1;
cout<<endl<<cnt <<" "<<cn<<" "<<cc<<" "<<co<<" "<<cm<<" "<<ccc;
if(cnt>=1){ f=cnt+1;}  else f=1;
if(cn>=1){ g=cn+1;}  else g=1;
if(cm>=1){ h=cm+1;}  else h=1;
if(co>=1){ k=co+1;}  else k=1;
if(ccc>=1){ l=ccc+1;}  else l=1;
if(cc>=1){ o=cc+1;}  else o=1;
s=f*g*h*k*l*o*u;
cout<<endl<<s;
		printf("\n");}
//unsigned int divisors(unsigned long int n){
//	unsigned short int primes[10000];
//	for(unsigned int i=0 ; i < 10000 && i <= n ; i++) primes[i]=0;
//	unsigned short int how_many=1;
//	for(unsigned long int i=2 ; i < 10000 && i <= n ; i++){
//		while(!(n%i))  {    n /= i;
//			primes[i]++;  }
//		if(primes[i]) how_many *= (primes[i]+1);   }
//	return how_many;
//}
