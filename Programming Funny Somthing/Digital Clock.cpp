#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
    int m,n,i,j,k,l,d;
    printf("\n\n\n");
    printf("------------------DGITAL CLOCK---------------------\n");
    printf("\n               Hour Miniute Second \n");
    for(d=0; d<365; d++)
    {
        for(i=0; i<24; i++)
        {
            for(j=0; j<60; j++)
            {
                for(k=0; k<60; k++)
                {
                    printf("        \t %.2d   %.2d   %.2d   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b",i,j,k);
                    Sleep(1000);
                }
            }
        }
    }
}
