#include <stdio.h>

int l,r,res,cnt,n,N;

int main(){
    while(scanf("%d%d",&l,&r)==2){
        res = 0;
        for(n= l; n<= r; n++){
            cnt = 0;
            N = n;
            while(1){
                cnt++;
                if(N == 1) break;
                else if(N % 2 == 1) N = 3 * N + 1;
                else N = N / 2;
            }
            if(cnt > res)
                res = cnt;
        }
        printf("%d %d %d", l, r, res);
    }
    return 0;
}
