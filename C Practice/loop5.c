 #include <stdio.h>
 int main()
 {
     int a,b,c, i;
     for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
                if(b!=c && a!=c){
            for(c=1;c<=3;c++){
                    if(a!=b && b!=c && a!=c){
                printf("%d %d %d\n",a,b,c);
            }
        }}}
     }
     return 0;
 }
