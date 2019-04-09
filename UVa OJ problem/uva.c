 #include<stdio.h>
int main()
{
    long int add, num,rev,t,i,j,k,d,count;
    while(scanf("%ld\n",&t)==1)
    {
        for(i=0;i<t;i++){
        scanf("%ld\n",&num);
        count=0;
        rev=0;
        for(j=num;j!=0;j=j/10)
        {
          d=j%10;
          rev=rev*10+d;
        }
        if(num!=rev)
        for(k=0;k<1000;k++)
            {
               add=num+rev;
                count++;
                rev=0;
                num=add;
        for(j=num;j!=0;j=j/10)
        {
            d=j%10;
            rev=rev*10+d;
        }
        if(num==rev)  break;
            }
            printf("%ld %ld\n",count,num);
    }}
    return 0;
}



