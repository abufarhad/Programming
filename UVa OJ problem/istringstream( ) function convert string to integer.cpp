#include<bits/stdc++.h>
using namespace std;
int strToNum(string str)
{
    istringstream ss(str);
    int n;
    ss>>n;
    cout<<n<<endl;
}

int main()
{
string str = "123";
for(int i=0; i<str.length(); i++)
strToNum(str); // Works fine
//strToNum(str[i]); //raises error
}
