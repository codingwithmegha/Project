#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void go();
void stop();
void ready();
void start();
void main()
{
clrscr();
int gdriver=DETECT,gmode,errorcode,midx,midy;
initgraph(&gdriver,&gmode,"..//bgi");
/////////////////////////////LOGO///////////////////////////////////////
midx=getmaxx()/2;
midy=getmaxy()/2;
setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(midx,midy-150,"***WELCOME***");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(midx,midy-70,"TRAFFIC LIGHT SIGNALS");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(midx-190,midy+80,"SUBMITTED TO:-");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(midx-185,midy+105,"MS.PRINCY JAIN");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(midx+190,midy+80,"SUBMITTED BY:-");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(midx+185,midy+105,"SANA & MEGHA");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(midx+200,midy+200,"press any key to enter");
line(80,200,550,200);
line(81,201,551,201);
rectangle(630,460,20,15);
rectangle(631,461,21,16);
rectangle(632,462,22,17);
getch();
cleardevice();
////////////////////////////RED LIGHT//////////////////////////////////
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
rectangle(midx-45,midy-125,midx+45,midy+125);
rectangle(midx-40,midy-120,midx+40,midy+120);
circle(midx,midy-50,30);
rectangle(312,364,322,475);
setfillstyle(SOLID_FILL,RED);
floodfill(midx,midy-50,WHITE);
setcolor(WHITE);
outtextxy(midx,midy-50,"STOP");
delay(1000);
graphdefaults();
cleardevice();
/////////////////////////////YELLOW LIGHT////////////////////////////////
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
rectangle(midx-45,midy-125,midx+45,midy+125);
rectangle(midx-40,midy-120,midx+40,midy+120);
circle(midx,midy,30);
rectangle(312,364,322,475);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(midx,midy,WHITE);
setcolor(BLUE);
outtextxy(midx-18,midy-3,"READY");
delay(1000);
cleardevice();
/////////////////////////GREEN LIGHT//////////////////////////////////////
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
rectangle(midx-45,midy-125,midx+45,midy+125);
rectangle(midx-40,midy-120,midx+40,midy+120);
circle(midx,midy+50,30);
rectangle(312,364,322,475);
setfillstyle(SOLID_FILL,GREEN);
floodfill(midx,midy+50,WHITE);
setcolor(WHITE);
outtextxy(midx-7,midy+48,"GO");
delay(1000);
cleardevice();
////////////////////////////////TRAFFIC SIGNAL//////////////////////////
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
rectangle(midx-45,midy-125,midx+45,midy+125);
rectangle(midx-40,midy-120,midx+40,midy+120);
circle(midx,midy-70,30);
rectangle(312,364,322,475);
setfillstyle(SOLID_FILL,RED);
floodfill(midx,midy-50,WHITE);
setcolor(WHITE);
outtextxy(midx-15,midy-75,"STOP");
circle(midx,midy,30);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(midx,midy,WHITE);
setcolor(BLUE);
outtextxy(midx-18,midy-3,"READY");
setcolor(WHITE);
circle(midx,midy+75,30);
setfillstyle(SOLID_FILL,GREEN);
floodfill(midx,midy+50,WHITE);
setcolor(WHITE);
outtextxy(midx-7,midy+72,"GO");
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
delay(1000);
//////////////////////////////CAR CODING//////////////////////////////
int s,i;
s=0;
for(i=0;i<400;i++)
{
setfillstyle(SOLID_FILL,WHITE);
circle(270,40,26);
floodfill(271,41,WHITE);
/////////////////////FIRST BUILDING////////////////////////////
rectangle(20,100,50,150);
rectangle(21,101,51,151);
rectangle(22,102,52,152);
////////////////////////SECOND BUILDING ////////////////////////////
rectangle(50,75,80,150);
rectangle(51,76,81,151);
rectangle(52,77,82,152);
///////////////////////THIRD BUILDING///////////////////////////////
rectangle(110,60,150,150);
rectangle(111,61,151,151);
rectangle(112,62,152,152);
///////////////////////FOURTH BUILDING/////////////////////////////////
rectangle(150,30,190,150);
rectangle(151,31,191,151);
rectangle(152,32,192,152);
/////////////////////////FIFTH BUILDING//////////////////////////////////
rectangle(190,60,240,150);
rectangle(191,61,241,151);
rectangle(192,62,242,152);
////////////////////////// SIXTH BUILDING/////////////////////////////////////
rectangle(240,90,270,150);
rectangle(241,91,271,151);
rectangle(242,92,272,152);
///////////////////////////7th building////////////////////////////////////
rectangle(300,50,340,150);
rectangle(301,51,341,151);
rectangle(302,52,342,152);
/////////////////////////////8th building///////////////////////////////////
rectangle(360,60,400,150);
rectangle(361,61,401,151);
rectangle(362,62,402,152);
/////////////////////////////9th building//////////////////////////////////
rectangle(400,40,450,150);
rectangle(401,41,451,151);
rectangle(402,42,452,152);
line(0,150,470,150);
line(0,151,470,151);
line(0,152,470,152);
line(0,153,470,153);
if(i<50)
{
circle(200+s,360,9);
circle(170+s,352,2);
circle(168+s,352,2);
circle(144+s,352,2);
circle(146+s,352,2);
floodfill(201+s,361,WHITE);
floodfill(199+s,359,WHITE);
circle(130+s,360,9);
floodfill(131+s,361,WHITE);
floodfill(129+s,359,WHITE);
line(119+s,360,105+s,360);
line(105+s,360,105+s,345);
line(105+s,345,115+s,345);
line(115+s,345,235+s,345);
line(200+s,340,180+s,345);
line(115+s,345,135+s,330);
line(135+s,330,180+s,330);
line(160+s,330,160+s,345);
rectangle(135+s,333,157+s,342);
rectangle(165+s,333,181+s,341);
circle(170+s,338,3);
floodfill(169+s,339,WHITE);
line(197+s,341,232+s,342);
line(133+s,342,125+s,342);
line(180+s,330,200+s,340);
line(235+s,342,235+s,359);
line(235+s,360,210+s,360);
circle(235+s,345,3);
circle(235+s,345,2);
line(190+s,360,140+s,360);
s=s+4;
delay(100);
cleardevice();
go();
}
else if(i>50&&i<100)
{
circle(200+s,360,9);
circle(170+s,352,2);
circle(168+s,352,2);
circle(144+s,352,2);
circle(146+s,352,2);
floodfill(201+s,361,WHITE);
floodfill(199+s,359,WHITE);
circle(130+s,360,9);
floodfill(131+s,361,WHITE);
floodfill(129+s,359,WHITE);
line(119+s,360,105+s,360);
line(105+s,360,105+s,345);
line(105+s,345,115+s,345);
line(115+s,345,235+s,345);
line(200+s,340,180+s,345);
line(115+s,345,135+s,330);
line(135+s,330,180+s,330);
line(160+s,330,160+s,345);
rectangle(135+s,333,157+s,342);
rectangle(165+s,333,181+s,341);
circle(170+s,338,3);
floodfill(169+s,339,WHITE);
line(197+s,341,232+s,342);
line(133+s,342,125+s,342);
line(180+s,330,200+s,340);
line(235+s,342,235+s,359);
line(235+s,360,210+s,360);
circle(235+s,345,3);
circle(235+s,345,2);
line(190+s,360,140+s,360);
delay(100);
cleardevice();
stop();
}
else if(i>100&&i<150)
{
circle(200+s,360,9);
circle(170+s,352,2);
circle(168+s,352,2);
circle(144+s,352,2);
circle(146+s,352,2);
floodfill(201+s,361,WHITE);
floodfill(199+s,359,WHITE);
circle(130+s,360,9);
floodfill(131+s,361,WHITE);
floodfill(129+s,359,WHITE);
line(119+s,360,105+s,360);
line(105+s,360,105+s,345);
line(105+s,345,115+s,345);
line(115+s,345,235+s,345);
line(200+s,340,180+s,345);
line(115+s,345,135+s,330);
line(135+s,330,180+s,330);
line(160+s,330,160+s,345);
rectangle(135+s,333,157+s,342);
rectangle(165+s,333,181+s,341);
circle(170+s,338,3);
floodfill(169+s,339,WHITE);
line(197+s,341,232+s,342);
line(133+s,342,125+s,342);
line(180+s,330,200+s,340);
line(235+s,342,235+s,359);
line(235+s,360,210+s,360);
circle(235+s,345,3);
circle(235+s,345,2);
line(190+s,360,140+s,360);
s=s+1;
delay(100);
cleardevice();
ready();
}
else if(i>150&&i<200)
{
circle(200+s,360,9);
circle(170+s,352,2);
circle(168+s,352,2);
circle(144+s,352,2);
circle(146+s,352,2);
floodfill(201+s,361,WHITE);
floodfill(199+s,359,WHITE);
circle(130+s,360,9);
floodfill(131+s,361,WHITE);
floodfill(129+s,359,WHITE);
line(119+s,360,105+s,360);
line(105+s,360,105+s,345);
line(105+s,345,115+s,345);
line(115+s,345,235+s,345);
line(200+s,340,180+s,345);
line(115+s,345,135+s,330);
line(135+s,330,180+s,330);
line(160+s,330,160+s,345);
rectangle(135+s,333,157+s,342);
rectangle(165+s,333,181+s,341);
circle(170+s,338,3);
floodfill(169+s,339,WHITE);
line(197+s,341,232+s,342);
line(133+s,342,125+s,342);
line(180+s,330,200+s,340);
line(235+s,342,235+s,359);
line(235+s,360,210+s,360);
circle(235+s,345,3);
circle(235+s,345,2);
line(190+s,360,140+s,360);
s=s+5;
delay(100);
cleardevice();
start();
go();
 }
 }
getch();
closegraph();
}
void go()
{
setcolor(WHITE);
circle(550,100,15);
circle(550,140,15);
circle(550,180,15);
rectangle(545,205,555,375);
rectangle(520,75,580,205);
settextstyle(3,0,2);
outtextxy(200,375,"TRAFFIC LIGHT SIGNAL");
line(0,376,640,376);
line(0,410,640,410);
}
void stop()
{
setfillstyle(1,RED);
circle(550,100,15);
floodfill(552,102,WHITE);
circle(550,140,15);
circle(550,180,15);
rectangle(545,205,555,375);
rectangle(520,75,580,205);
settextstyle(3,0,2);
outtextxy(200,375,"TRAFFIC LIGHT SIGNAL");
line(0,376,640,376);
line(0,410,640,410);
}
void ready()
{
circle(550,100,15);
circle(550,140,15);
setfillstyle(1,YELLOW);
circle(550,180,15);
floodfill(552,132,WHITE);
rectangle(545,205,555,375);
rectangle(520,75,580,205);
settextstyle(3,0,2);
outtextxy(200,375,"TRAFFIC LIGHT SIGNAL");
line(0,376,640,376);
line(0,410,640,410);
}
void start()
{
circle(550,100,15);
circle(550,140,15);
circle(550,180,15);
setfillstyle(1,GREEN);
floodfill(552,172,WHITE);
rectangle(545,205,555,375);
rectangle(520,75,580,205);
settextstyle(3,0,2);
outtextxy(200,375,"TRAFFIC LIGHT SIGNAL");
line(0,376,640,376);
line(0,410,640,410);
}