#include<bits/stdc++.h>
using namespace std;
int main()
{
printf("  ^*^   ^*^  ^*^   ^*^  Software  Create by FARHAD  ^*^   ^*^  ^*^   ^*^\n");
    printf("                        __________________________                                 \n\n\n");

    char a[100], b[100], c='%';
    int r, l,m,sum=0,sum1=0,i,j;
    printf("\n\n\n");
    printf("------------------------------LOVE CALCULATOR-------------------------------\n\n");
     printf("Entre your Name All cherecter upper case or All cherecter lower case  : \n");
    //gets(a);
    cin>>a;
    l=strlen(a);
    printf("Enter your lover name if your name done by upper case then lover name upper case or vice verse : \n");
    //gets(b);
    cin>>b;
    m=strlen(b);
    for(i=0,j=0;i<l,j<m;i++,j++){
        sum=sum+a[i];
        sum1=sum1+b[i];

    }
    r=(sum+sum1)%100;
    printf("Love between %s and %s is = %d%c ",a,b,r,c);
}
