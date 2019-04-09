#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,k,l,cnt=0;
char s[100];
while(gets(s)){
    l=strlen(s);
    for(i=0;i<l;i++){
          if(s[i]=='"'){
            cnt++;
            if(cnt%2==1){
                  printf("``");}
                  else
         printf("''");
        }
        else cout<<s[i];
    }
}
return 0;
}
