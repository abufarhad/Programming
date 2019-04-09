#include<bits/stdc++.h>

using namespace std;
long long int j,k,h,s,p,t,q,z;
bool  r[10000000];
long long int m[1000000];


int main()
{
    long long  int i,y=1, n;

    m[0]=2;//cout<<"ghlkk\n";
    for(i=4; i<10000000; i+=2)
    {
        r[i]=true;
    }
    for(i=3; i<10000000; i+=2)
    {
        if(r[i]==false)
        {
            m[y++]=i;

            for(t=i*i; t<10000000; t+=i+i)
            {
                r[t]=true;
            }
        }
    }
//for(j=2;j<10000000;j+=2){
//
//   if(r[j]==false){m[y++]=j;  } }

//cout<<y<<endl;
//f
//()
//cout<<y<<endl;
    long long int v;

//for(j=0;j<100;j++){cout<<ami[j]<<endl;}

    long long int d,k,h;

    scanf("%lld",&d);
    int l;
    for(k=0; k<d; k++)
    {
        scanf("%lld",&n);
        i=0;
        v=0;
        while(m[i]<=n/2)
        {
            p=n-m[i];
            cout<<"p= "<<p<<"  r[p] "<<r[p]<<" "<<"m[i] ="<<m[i]<<endl;
            if((r[p]==0)&&p>1)
            {
                v++;
            }
            i++;
        }
        printf("Case %lld: %lld\n",k+1,v);
    }
}



// int l=0;h=y-1;

// p=n-ami[i];
/*if(p>ami[i]){l=i+1;}
else if(p<ami[i]){h=i-1;}


m =(h+l)/2;
z=0;
while(h>=l){


if(ami[m]==p){z++;break;}


else if(ami[m]<p){l=m+1;}
else if(ami[m]>p){h=m-1;}

m=(h+l)/2;//cout<<m<<endl;
}//cout<<z<<" "<<p<<endl;
*/
//if((rifat[p]==0)&&p>1){ v++;}
//i++;   }
//printf("Case %lld: %lld\n",k+1,v);} }
//cout<<"Case "  <<k+1<<": "<<v<<endl;}



