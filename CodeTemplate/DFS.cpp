for(ll j=1;i<4;i++){
    if(i==B[ind-1]&&ind!=0)
    continue;


    if(dp[ind][i]==-1){
            B[ind]=i;

    dp[ind][i]=cmbn(ind+1,len)%limit;
    B[i]=0;
    }
    sum+=dp[ind][i]%limit;
    sum%=limit;

}
