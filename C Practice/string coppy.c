 #include<stdio.h>
 #include<string.h>
int main()
{
    int c;
    char s1[100],s[100];
//    int c=1,i;
//    scanf("%s%s",s,s1);
//    c=1;
//    i=0;
//    while(s[i]!='\0'|| s1[i]!='\0'){
//        if (s[i]!=s1[i]){
//            c=0;
//            break;
//        }
//        i++;
//    }
//
//   if(c==1)
//        printf("same");
//    else
//        printf("Not same");

 scanf("%s",s);
 scanf("%s",s1);

c=strcmp(s,s1);
if(c==0)
    printf("Same ");
else

    printf("Not same");
//printf("%s",s);
        return 0;

}

