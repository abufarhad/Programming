#include<bits/stdc++.h>
using namespace std;


vector<int>res;
void add(char f[],char s[]){
    int i,a,b,hand=0,now;char c;
    for(i=0;i<strlen(f);i++){
        a=f[i]-'0';b=s[i]-'0';
        if(a+b+hand>=10)
        {
            now=(a+b+hand)-10;
            hand=1;
            c=(char)now;
            res.push_back(now);

        }
        else{
            now=(a+b+hand);
            hand=0;
            res.push_back(now);

        }

    }
    if(hand==1)
            res.push_back(1);

}

int main()
{
    char first[100];
    char sec[100];
    cin>>first;
    cin>>sec;
    strrev(first);
    strrev(sec);

    //cout<<first<<" "<<sec<<endl;
    int i;

    if(strlen(first)>strlen(sec)){
        for(i=strlen(sec);i<strlen(first);i++)
            sec[i]='0';
        sec[i]='\0';
    }
    if(strlen(first)<strlen(sec)){
        for(i=strlen(first);i<strlen(sec);i++)
            first[i]='0';
        first[i]='\0';
    }


    //cout<<"........"<<first<<" "<<sec<<endl;
    add(first,sec);
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++)
        cout<<res[i];

    return 0;
}
