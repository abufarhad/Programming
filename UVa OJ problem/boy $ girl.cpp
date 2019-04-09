#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char arr[100];
    scanf("%s",arr);

    int l = strlen(arr);

    set<char> myset;

    for(int i=0;i<l;i++ )
    {
        myset.insert(arr[i]);
    }

    if(myset.size()%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    if(myset.size()%2!=0)
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
