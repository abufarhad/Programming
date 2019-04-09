#include<stdio.h>
int main()
{
    int i,j,n,a,b,c,d,e,sum,avg,res;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            if((0<a<100)&&(0<b<100)&&(0<c<100)&&(0<d<100)&&(0<e<100))
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
             else
                break;
    sum=a+b+c+d+e;
    avg=sum/5;
    printf("%d\n",avg);
    }
return 0;
}

