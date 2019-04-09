#include<bits/stdc++.h>
#include <math.h>
using namespace std;
void printPowerSet(char *set, int set_size)
{
    unsigned int pow_set_size = pow(2, set_size);
    int counter,i, j,k;

    for(counter = 0; counter < pow_set_size; counter++)
    {
        i=0;
        cout<<"{";
        k=set_size;
      for(j = 0; j < set_size; j++)
       {
          if(counter & (1<<j)){
                i=1;
            printf("%c", set[j]);}
            else
                i=0;
      if( i&&(counter&(1<<(j+1))||(counter&(1<<j+2))||(counter&(1<<j+3))||(counter&(1<<j+4))||(counter&(1<<j+5))||(counter&(1<<j+6))||(counter&(1<<j+7))||(counter&(1<<j+8))||(counter&(1<<j+9))||(counter&(1<<j+10)) && j!=set_size-1))

            cout<<",";
       }
       if(counter<pow_set_size-1)
       printf("},");
       else
        cout<<"}";
    }
}
int main()
{
    int i,j=0,l,ll;
    char s[500],set[500];
    cout<<"Enter the A set: "<<endl;
    gets(s);
    l=strlen(s);
    for(i=0;i<=l;i++)
    {
        if(s[i]!=',' && s[i]!='{' && s[i]!='}')
            set[j++]=s[i];
    }
    ll=strlen(set);
    cout<<"\nPower set of A:"<<endl;
    cout<<"{";
    printPowerSet(set,ll);
    cout<<"}"<<endl;
    getchar();
    return 0;
}
