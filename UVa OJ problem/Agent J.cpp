#include<bits/stdc++.h>
using namespace std;
int main(){
//int r1,r2,r3,a,b,c,n;
//double s,Ar,A,B,C,A1,A2,A3;
//cin>>n;
//while(n--){
//cin>>r1>>r2>>r3;
//a=r1+r2; b= r2+r3;  c=r3+r1;
//s=(a+b+c)/2;
//Ar=sqrt(s*(s-a)*(s-b)*(s-c));
//double a2 = pow(a, 2);
//double b2 = pow(b, 2);
//double c2 = pow(c, 2);
//
//A=acos(-((b2-c2-a2)/(2*c*b)));
//B=acos(-((a2-c2-b2)/(2*a*c)));
//C=acos(-((a2-b2-c2)/(2*a*b)));
//
//A1=(.5*pow(r1,2)*A);
//A2=(.5*pow(r2,2)*B);
//A3=(.5*pow(r3,2)*C);
//double TA=(Ar-(A1+A2+A3));
//
//cout<<TA;}
//return 0;
//
//}
////int main()
////{
////    int t;
////    cin>>t;
////
////    for(int i=0;i<t;i++)
////    {
////        double a, b, c,s, R1, R2, R3, triangle_area, angle_A, angle_B,
////        angle_C, R1_area, R2_area, R3_area;
////
////        cin>>R1>>R2>>R3;
////        a = R1 + R2;
////        b = R2 + R3;
////        c = R3 + R1;
////        s = (a+b+c)/2.0;
////
////        triangle_area = sqrt(s*(s-a)*(s-b)*(s-c));
////
////        double a2 = pow(a, 2);
////        double b2 = pow(b, 2);
////        double c2 = pow(c, 2);
////
////        angle_C = acos(-(c2-a2-b2)/(2.0*a*b));
////        angle_A = acos(-(a2-b2-c2)/(2.0*b*c));
////        angle_B = acos(-(b2-a2-c2)/(2.0*a*c));
////
////
////        R1_area = (R1/2.0) * angle_B * R1;
////        R2_area = (R2/2.0) * angle_C * R2;
////        R3_area = (R3/2.0) * angle_A * R3;
////
////        double final_area = triangle_area - (R1_area + R2_area + R3_area);
////
////        printf("Case %d: %.10f\n", i+1, final_area);
////
////    }
////
////    return 0;
////}
////
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//
//    long longi,j,k,remainder,sum,num,test_case,n,i;
//scanf("%ld",&test_case);
//for(k=1;k<=test_case;k++){
//scanf("%lld",&n);      num=n;
//for(j=1; ;j++){
//sum=0;
//for(i=1; ;i++){
//remainder=num%10;
//num=num/10;
//sum=sum+pow(remainder,2);
//if(num==0){
//num=sum;
//break;
//                }
//            }
//if(num<=9){
//break;
//            }
//        }
//if(num==1 || num==7){
//printf("Case #%lld: %lld is a Happy number.\n",k,n);
//        }
//else{
//printf("Case #%lld: %lld is an Unhappy number.\n",k,n);
//        }
//    }
//return 0;
//}

string t;
int hh,mm,ss,cc,g;
while(cin>>t){

    hh=(t[0]-48)*10+(t[1]-48);
    mm=(t[2]-48)*10+(t[3]-48);
    ss=(t[4]-48)*10+(t[6]-48);
    cc=(t[6]-48)*10+(t[7]-48);
    g=hh*3600+mm*60+ss;
    g*=100;
    g+=cc;
    g=(g*125)/108;
    cout<<g;
}
return 0;}
