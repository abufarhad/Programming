#include<bits/stdc++.h>
using namespace std;

double f(double x);
double f(double y){
	double x;
	x=sqrt(1-y*y);
	return x;
}
double g(double x);
doubke g(double x){
	double y;
	y=x*x*x;
	return y;
}

double fprimex(double a);
double fprimex(double a){

	return 0;
}

double fprimey(double a);
double fprimey(double a){
	double b;
	b=-1/sqrt(1-y*y);

	return b;
}


double gprimex(double a);
double gprimex(double a){
	double b;
	b=3*x*x;

	return b;
}

double gprimey(double a);
double gprimey(double a){

	return 0;
}




int main(){
	double a1,a2,f1,f2,g1,g2,x[100],y[100],c,d,a,b,e=100,i=0;
	s:cout<<"Enter the approximation root of the equation\n";
	cin>>a1>>a2;
	f1=fprimexabs(a1);
	f2=fprimeyabs(a2);
	g1=gprimexabs(a1);
	g2=gprimeyabs(a2);

	if((f1+f2)<1 && (g1+g2)<1){
		while(e>.00001)
		c=f(a1);
		d=g(a2);
		x[i]=c;
		y[i]=d;
		a=x[i];
		b=y[i];
		a1=c;
		a2=d;
		e=a-b;
		i++;


	}

	else{

		cout<<"Wrong choice......"<<endl;
		goto s;
	}

}
