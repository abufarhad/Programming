# include <bits/stdc++.h>
using namespace std;

double func1(double x){
 return (1.00/(1.00+x));
 }
int main ( ){
int f[100],i=0,cnt=0,temp=0,tem=0,temp1=0;
double a,h,x, b,n,c=0,d;
printf("Enter the limit of this function\n");
cin>>a>>b;
printf( " Enter value of h\n");
cin>>h;
while(b>=c){
        cnt++;
    d=func1(c);
    f[i]=d;
    printf("x= %llf  y= %llf\n",c,d);
    c=c+0.5;
    f[i]=c;  i++;

    }
for(i=1;i<cnt-1;i++){
    temp1=temp1+2*(f[i]);
}

for(i=1;i<=cnt-1;i++){
        if(i%2!=0)
    temp=temp+4*(f[i]);
else tem=tem+(2*f[i]);
}
//integ=(h*sum)/3;
//cout<<cnt;
printf("Trapizal rule\n");
    n=(h/2*(f[0]+(temp1)+f[cnt-1]));
    cout<<n<<endl;

printf("Simpson 1/3 role\n");
double n1=(h/3.0*(f[1]+temp+tem+f[cnt-1]));
cout<<n1<<endl;


 //cout<<b<<endl;
    return 0;}



