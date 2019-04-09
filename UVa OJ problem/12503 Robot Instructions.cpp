#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,p,i,cnt,b[100];
    char a[35];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        cnt=0;
        for(i=0; i<m; i++)
        {
            scanf("%s",a);
            if (strcmp(a,"LEFT")==0)
            {
                cnt-=1;
                b[i]=-1;
            }
            else if (strcmp(a,"RIGHT")==0)
            {
                cnt+=1;
                b[i]=1;
            }
            else    scanf("%s%d",a,&p);
            {
                cnt+=b[p];
                b[i]=b[p];
            }
        }
        printf("%d",&cnt);
    }
    return 0;
}
