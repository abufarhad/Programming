# include "iGraphics.h"
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <time.h>
int t[6] = {};
int i=0,j=0,k,r;
int x=255,z=0;
int a[7][4]={{300,300,5,25},{300,270,5,25},{275,300,5,25},{275,270,5,25},{280,326,21,5},{280,296,21,5},{280,265,21,5}};
/*
	function iDraw() is called again and again by the system.
*/
void gettime(int t[]) {
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;
    t[5]=current->tm_year;
    t[4]=current->tm_mon+1;
    t[3]=current->tm_mday;
}

void cc1(int dx,int dy){
        i=1;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=0;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
}
void cc2(int dx,int dy){
        i=3;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=4;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=0;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=5;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=6;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
}
void cc3(int dx,int dy){
        i=0;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=1;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=4;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=5;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=6;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
}
void cc4(int dx,int dy){
        i=0;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=1;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=2;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=5;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
}
void cc5(int dx,int dy){
        i=1;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=2;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=4;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=5;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=6;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
}
void cc6(int dx,int dy){
        i=1;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=2;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=3;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=4;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=5;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=6;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
}
void cc7(int dx,int dy){
        i=0;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=1;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=4;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
}
void cc8(int dx,int dy){
        i=0;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=1;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=2;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=3;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=4;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=5;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=6;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
}
void cc9(int dx,int dy){
        i=0;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=1;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=2;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=4;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=5;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=6;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
}
void cc0(int dx,int dy){
        i=0;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=1;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=2;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=3;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=4;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
        i=6;iFilledRectangle(a[i][0]-dx,a[i][1]-dy,a[i][2],a[i][3]);
}
void iDraw()
{
	//place your drawing codes here
	iClear();
    iSetColor(x,255,z);
    gettime(t);
    for(k=0;k<3;k++){
        if(t[k]%10==0)cc0(180-90*k,0);
    else if(t[k]%10==1)cc1(180-90*k,0);
    else if(t[k]%10==2)cc2(180-90*k,0);
    else if(t[k]%10==3)cc3(180-90*k,0);
    else if(t[k]%10==4)cc4(180-90*k,0);
    else if(t[k]%10==5)cc5(180-90*k,0);
    else if(t[k]%10==6)cc6(180-90*k,0);
    else if(t[k]%10==7)cc7(180-90*k,0);
    else if(t[k]%10==8)cc8(180-90*k,0);
    else if(t[k]%10==9)cc9(180-90*k,0);
        if(t[k]/10==0)cc0(220-90*k,0);
    else if(t[k]/10==1)cc1( 220-90*k,0);
    else if(t[k]/10==2)cc2( 220-90*k,0);
    else if(t[k]/10==3)cc3( 220-90*k,0);
    else if(t[k]/10==4)cc4( 220-90*k,0);
    else if(t[k]/10==5)cc5( 220-90*k,0);
    else if(t[k]/10==6)cc6( 220-90*k,0);
    else if(t[k]/10==7)cc7(220-90*k,0 );
    else if(t[k]/10==8)cc8( 220-90*k,0);
    else if(t[k]/10==9)cc9( 220-90*k,0);
    }
    iSetColor(0,0,255);
    for(k=3;k<6;k++){
        if(t[k]%10==0)cc0(180-90*(k%3),100);
    else if(t[k]%10==1)cc1(180-90*(k%3),100);
    else if(t[k]%10==2)cc2(180-90*(k%3),100);
    else if(t[k]%10==3)cc3(180-90*(k%3),100);
    else if(t[k]%10==4)cc4(180-90*(k%3),100);
    else if(t[k]%10==5)cc5(180-90*(k%3),100);
    else if(t[k]%10==6)cc6(180-90*(k%3),100);
    else if(t[k]%10==7)cc7(180-90*(k%3),100);
    else if(t[k]%10==8)cc8(180-90*(k%3),100);
    else if(t[k]%10==9)cc9(180-90*(k%3),100);
        if((t[k]%100)/10==0)cc0(220-90*(k%3),100);
    else if((t[k]%100)/10==1)cc1( 220-90*(k%3),100);
    else if((t[k]%100)/10==2)cc2( 220-90*(k%3),100);
    else if((t[k]%100)/10==3)cc3( 220-90*(k%3),100);
    else if((t[k]%100)/10==4)cc4( 220-90*(k%3),100);
    else if((t[k]%100)/10==5)cc5( 220-90*(k%3),100);
    else if((t[k]%100)/10==6)cc6( 220-90*(k%3),100);
    else if((t[k]%100)/10==7)cc7(220-90*(k%3),100 );
    else if((t[k]%100)/10==8)cc8( 220-90*(k%3),100);
    else if((t[k]%100)/10==9)cc9( 220-90*(k%3),100);
    }
    iSetColor(255,0,0);
    iFilledCircle(135,310,r);
    iFilledCircle(135,275,r);
    iFilledCircle(226,310,r);
    iFilledCircle(226,275,r);
    iSetColor(0,0,255);
    iFilledCircle(135,170,5);
    iFilledCircle(226,170,5);

}
void iMouseMove(int mx, int my)
{
	//place your codes here
}
void iMouse(int button, int state, int mx, int my)
{

}
void iKeyboard(unsigned char key)
{
	//place your codes for other keys here
}
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}
void colon(){
    r=5-r;
}
void clrchange(){
        x=428-x;
        z=47-z;
}
int main()
{
    iSetTimer(500,colon);
    iSetTimer(500,clrchange);
    iInitialize(400,400, "DIGITAL CLOCK");
	return 0;
}
bujhli?
