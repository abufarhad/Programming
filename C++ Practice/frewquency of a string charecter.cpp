#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100],result[100]= {0},n,f;
    cin>>n>>f;
    // puts("Enter any string");
    gets(str);                        // string input from user
    int len,i,j,count,k=0,cn=0,cnt=0;
    len=strlen(str);
    for(i=0; i<len; i++)
    {
        count=0; // cn=0;
        for(j=0; j<i; j++)
        {
            if(str[i]==result[j])     // check if char is unique
            {
                count++;
            }
        }
        if(count==0)
        {
            result[k++]=str[i];
            cn++;
        }
        if(count!=0)
        {
            cnt++;
            result[k++]=str[i];
        }
        cout<<result<< " "<<cnt<<endl;
    }
    printf("Output string with only unique characters:");
    puts(result);
    cout<<cn<<endl;


//    getch();
}
