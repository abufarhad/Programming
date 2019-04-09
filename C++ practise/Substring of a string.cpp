#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x++)
#define ps printf(" ")
#define pn printf("\n")

#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})
#define sv(a) sort(a.begin(),a.end())

int main()
{
    int i;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
char str1[80], str2[80];

    cout<<"Enter first string: ";
    cin.getline(str1, 80);

    cout<<"Enter second string: ";
    cin.getline(str2, 80);

    int l = 0; //Hold length of second string

    //finding length of second string
    for(l = 0; str2[l] != '\0'; l++);
    int i, j;   //cout<<str2[l]<<" ";
    for(i = 0 ,j=0; str1[i] != '\0' && str2[j] != '\0'; i++) {
        if(str1[i] == str2[j])   {  j++;  cout<<str1[i]<<endl;  }
        else {  j = 0;   }}
    if(j == l){
        cout<<j<<endl;
        cout<<"Substring found at position "<< i - j + 1;}
    else
        cout<<"Substring not found";

   return(0);
}

