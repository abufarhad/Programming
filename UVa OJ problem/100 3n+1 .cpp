#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,ans;
    while(cin>>m>>n)
    {
        ans=0;
        if(m>n)swap(m,n);
        for(int i=m;i<=n;i++)
        {
            int cnt=1, k=i;
            while(k>1)
            {
                if(k%2)k=(3*k)+1;
                else k/=2;
                cnt++;
            }
            ans=max(ans,cnt);
            }
            cout<<m<<" "<<n<<" "<<ans<<endl;
    }
}






//#include<bits/stdc++.h>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//    int m,n,t,a,b,i,j,k;
//
//    while ( (scanf("%d %d",&i,&j)) == 2)
//    {
//        int ans=0;
//        if(i>j) { m=j, j=i, i=m; }
//
//        for(a=i; a<=j; a++)
//        {
//            int cnt=1;
//            k=a;
//            while(k>1)
//            {
//                if(k%2==0) k/=2;
//                else  k=(3*k)+1;
//                cnt++;
//            }
//             if(cnt>=ans) ans=cnt;
//        }
//        printf("%d %d %d\n",i,j,ans);
//    }
//    return 0;
//}
//




