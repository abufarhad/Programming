#include<bits/stdc++.h>
using namespace std;;
int main()
{
    int i,j,l,cnt=0,d;
    char s[100000];
    cin>>j;
    while(j--)
    {
        cnt=0;
        cin>>s;

        l=strlen(s);
        for(i=0; i<l; i++)
        {
            cnt++;
        }// cout<<cnt<<endl;


        for(i=0; i<l; i++)
        {
            if((s=="1"||s=="4"||s=="78"))
            {
                cout<<"+";
                break;
            }
            else   if(s[cnt]=='5'&&s[cnt-1]=='3')
            {
                cout<<"-";
                break;
            }
            else  if(s[0]=='1'&&s[1]=='9'&&s[2]=='0')
            {
                cout<<"?";
                break;
            }
            else if (s[0]=='9'&&s[cnt]=='4')
            {
                cout<<"*";
                break;
            }
        }
    }
    //else cout<<"*"; break;}}
    return 0;
}
