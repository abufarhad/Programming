#include<graphics.h>

int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    ///1st Function :
    ellipse(300,300,0,0,50,100);
    outtextxy(300,240,"A");
    outtextxy(300,270,"B");
    outtextxy(300,300,"C");
    outtextxy(300,330,"E");
    outtextxy(300,360,"F");

    ///2nd Function :
    ellipse(500,300,50,50,50,100);
    outtextxy(500,240,"1");
    outtextxy(500,270,"2");
    outtextxy(500,300,"3");
    outtextxy(500,330,"4");
    outtextxy(500,360,"5");

    outtextxy(200,420,"Fig.1 : One To One and Onto Function and Bijection");

    ///Drawing Line :
    line(320,240,490,240);
    line(320,270,490,270);
    line(320,300,490,300);
    line(320,330,490,330);
    line(320,360,490,360);

        ///1st Function :
    ellipse(300,550,0,0,50,100);
    outtextxy(300,490,"A");
    outtextxy(300,520,"B");
    outtextxy(300,550,"C");
    outtextxy(300,580,"E");
    outtextxy(300,610,"F");

    ///2nd Function :
    ellipse(500,550,50,50,50,100);
    outtextxy(500,490,"1");
    outtextxy(500,520,"2");
    outtextxy(500,550,"3");
    outtextxy(500,580,"4");
    outtextxy(250,670,"Fig.3 : Not One To One Only Onto");


    ///Drawing Line :
    line(320,490,490,490);
    line(320,520,490,520);
    line(320,550,490,550);
    line(320,580,490,580);
    line(320,610,490,580);

        ///1st Function :
    ellipse(700,300,0,0,50,100);
    outtextxy(700,240,"A");
    outtextxy(700,270,"B");
    outtextxy(700,300,"C");
    outtextxy(700,330,"E");
    outtextxy(700,360,"F");

    ///2nd Function :
    ellipse(900,300,50,50,50,100);
    outtextxy(900,240,"1");
    outtextxy(900,270,"2");
    outtextxy(900,300,"3");
    outtextxy(900,330,"4");
    outtextxy(900,360,"5");

    outtextxy(650,420,"Fig.2 : Not One To One and Not Onto,just Normal Function");

    ///Drawing Line :
    line(720,240,890,270);
    line(720,270,890,270);
    line(720,300,890,240);
    line(720,330,890,330);
    line(720,360,890,300);

    getch();
}
