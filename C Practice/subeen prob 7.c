#include<stdio.h>
#include<math.h>
int main()
{
int i,j,k,l;
float h;
scanf("%d",&k);
for(i=0;i<k;i++){
    scanf("%d",&l);
    h=sqrt(l);
    if((h) - (int)(h)==0)
        printf("YES\n");
    else
        printf("NO\n");
}
return 0;
}
