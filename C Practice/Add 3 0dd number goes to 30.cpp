#include<cstdio>
using namespace std;
int main()
{
    int a[8]={1,3,5,7,9,11,13,15};
    for(int i1=0;i1<8;i1++)
        for(int i2=0;i2<8;i2++)
            for(int i3=0;i3<8;i3++)
        if((a[i1]+a[i2]+a[i3]) == 30)
        printf("%d %d %d  \n",a[i1],a[i2],a[i3]);
 return 0;
}
