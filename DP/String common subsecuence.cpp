#include<bits/stdc++.h>
using namespace std;

int count_s(string  x,string y, int m, int n)
{
   // if(m==1||n==1){ return  (x[0]==y[0]);}
    	if (m == 1 && n == 1)
		return (x[0] == y[0]);
    if(n>m){ return 0;}
    if(m==0) return 0;
    if(n==0) return 1;

   	return ((x[m-1] == y[n-1]) ? count_s(x,y, m - 1, n - 1) : 0) +
 		count_s(x,y, m - 1, n);

}

int main()
{

    string x, y="QAQ";
    cin>>x;
  // cout<<count_sub(s,s1,s.size(),s1.size())<<endl;
   cout << count_s(x,y,x.size(), y.size());
}
