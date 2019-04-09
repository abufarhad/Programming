#include<stdio.h>
int main()
{
    long int n[6000]={0}, x=2,y=3,z=5,t=2,a=1,b=1,c=1,i,j;
     n[1]=1;
    while(n[1500]==0)
    {
        if(x<y&&x<z){
        n[t]=x;
        a++;       x=n[a]*2;  t++;}

        else if(y<x&&y<z){
        n[t]=y;
        b++;       y=n[b]*3;  t++;}

        else if(z<y&&z<x){
        n[t]=z;
        c++;       z=n[c]*5;  t++;}

    if(x==y)
       {
           a++;   x=n[a]*2;
       }

        else if(y==z)
       {
           b++;   y=n[b]*3;
       }

        else if(z==x)
       {
           c++;   z=n[c]*5;
       }

}
printf("The 1500  ugly number is %d",n[1500]);
return 0;
}





