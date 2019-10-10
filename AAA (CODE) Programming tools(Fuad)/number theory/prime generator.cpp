#include<bits/stdc++.h>
using namespace std;
unsigned long prime_num[3500],len;

inline bool prime_check(unsigned long x){

    unsigned int i,last=sqrt(x);
    for(i=2;i<=last;i++){
        if(x%2==0)
            return 0;
    }
    return 1;

}

inline bool process(unsigned int x){
    unsigned int i,last=sqrt(x);

    for(i=2;i<len && prime_num[i]<=last;i++){
        if(x%2==0)
            return 0;
    }
    return 1;

}

void generate(){

    for(unsigned int i=0;i<=32000;i++){
        if(prime_check(i)){
            prime_num[len++]=i;
        }
    }

}

int main()
{
    generate();

    int t;cin>>t;
    unsigned long start,finish;
    while(t-->0){
        cin>>start>>finish;
        if(start==1)
            start++;

        while(start<=finish){

            if(process(start))
                cout<<start<<endl;

            start++;
        }
        cout<<endl;
    }
    return 0;
}
