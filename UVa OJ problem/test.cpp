#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void calc(int x);
int main()
{
 int x = 10;
 calc(x);
 printf("%d", x);
}

void calc(int x)
{
 x = x + 10 ; return calc(x);
}
