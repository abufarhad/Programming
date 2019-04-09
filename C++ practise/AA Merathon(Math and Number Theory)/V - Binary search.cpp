#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000000];
int main(){
 ll i,u,num,c,l,n,mid,q,save ,ans ,s;
 //printf("Enter element number and quary:");
scanf("%lld %lld",&n,&q);
//cin>>n>>q;
 //printf("Enter elements :");
 for(i=0;i<n;i++)
{
    scanf("%lld",&a[i]);
    //cin>>a[i];
    }

while(q--){ c=0;
 //printf("Enter number you want to find :\n");
//cin>>num;
scanf("%lld",&num);
//for(i=0;i<n;i++){ if(num==a[i] )  save=i; s=a[i]; break; }
 l=0;u=n-1;
 while(l<=u)
 {
     mid=(l+u)/2;
     if(num==a[mid])
     {
        c=1;  ans = mid;
        u = mid-1;
         }
     else if(num<a[mid])
     {
         u=mid-1;
     }
     else
         l=mid+1;
     }
     if(c==0)
        printf("-1\n");
   //  else if(a[mid]==s) printf("%lld\n",save);
     else
     printf("%lld\n",ans);}

    return 0;
}

