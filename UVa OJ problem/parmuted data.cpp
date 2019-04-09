#include<bits/stdc++.h>
using namespace std;
int main(){
long long i,j,m,n,d,e;
cin>>m>>n;

for(i=1;;  i++){
if(i%2!=0){
    m-=i;
   if(m<0) {  cout<<"Vladik"<<endl;  return 0; }
}
else
    n-=i;
    if(n<0) {cout<<"Valera"<<endl;   return 0; }
   // cout<<"m-->"<<m<<endl;    cout<<"n--> "<<n<<endl;
   // if(m<=0) {  cout<<"Valera"<<endl; break;}
   // if(n<=0) {cout<<"Vladik"<<endl; break;}
}
return 0;
}
//int main ()
//{
//    ll cs, t, i, j, k, x, y, z, ans, q, m, n, a, b;
//
//    cin >> x >> y;
//
//    a = b = 0;
//
//    for (i = 1; ; i++)
//    {
//        if (i%2 != 0)
//        {
//            x -= i;
//
//            if (x < 0)
//            {
//                printf("Vladik\n");
//                return 0;
//            }
//        }
//        else
//        {
//            y -= i;
//
//            if (y < 0)
//            {
//                printf("Valera\n");
//                return 0;
//            }
//        }
//    //    cout << i << " " << x << " " << y << " " << a << " " << b << endl;
//    }
//
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//   // ios::sync_with_stdio(false);
//
//    int a,b;
//
//    cin>>a>>b;
//
//    for(int i=1;a>=0 && b>=0;i++)
//    {
//        if(i%2==1)
//        {
//            a-=i;
//        }
//        else
//        {
//
//            b-=i;
//        }
//
//        cout<<i<<"   "<<a<<"   "<<b<<endl;
//    }
//
//    if(a<0)
//    {
//        cout<<"Vladik";
//    }
//    else
//    {
//        cout<<"Valera";
//    }
//
//    return 0;
//}
