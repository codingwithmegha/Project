#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<process.h>
#include<dos.h>
void taj()
{
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"..//bgi");
int h=40;
delay(500);
//outtextxy(550,460,"TAJ MAHAL");
line (0,440,639,440);

//##################################CONSTRUCTION OF TOWER-1#####################################

int l=-20;
delay(500);
line(28+l,400+h,33+l,333+h);

line(86+l,400+h,80+l,333+h);

//############### 1st STAGE ######################


line(23+l,328+h,32+l,334+h);

line(90+l,328+h,80+l,334+h);

line(83+l,323+h,75+l,334+h);

line(75+l,323+h,70+l,332+h);

line(66+l,323+h,65+l,332+h);

line(57+l,323+h,57+l,332+h);

line(30+l,323+h,39+l,334+h);

line(38+l,323+h,45+l,332+h);

line(48+l,323+h,51+l,332+h);

ellipse(57+l,320+h,350,190,34,5);

ellipse(57+l,327+h,350,190,34,5);

ellipse(57+l,337+h,0,180,24,5);

line(22+l,320+h,22+l,328+h);

line(91+l,320+h,91+l,327+h);

setfillstyle(6,WHITE);

floodfill(60+l,320+h,15);

setfillstyle(1,WHITE);

floodfill(60+l,320+h+15,15);

//######################## 2ND STAGE ##########################


line(35+l,315+h,38+l,242+h);

line(80+l,315+h,75+l,242+h);

int t=-93;


line(23+4+l,328+t+3+h,32+5+l,334+t+h);

line(88+l,328+t+2+h,76+l,334+t+h);

line(78+l,323+t+3+h,71+l,332+t+h);

line(66+l,323+t+2+h,65+l,332+t+h);

line(57+l,323+t+2+h,57+l,332+t-2+h);

line(35+l,323+t+3+h,45-3+l,332+t+h);
line(48+l,323+t+2+h,51+l,332+t-2+h);

ellipse(57+l,320+t+3+h,360,190,30,5);

ellipse(57+l,327+t+3+h,360,190,30,5);

ellipse(57+l,337+t-1+h,0,180,18,5);

line(26+l,320+t+3+h,26+l,328+t+2+h);

line(88+l,320+t+3+h,88+l,327+t+3+h);

setfillstyle(6,WHITE);

floodfill(60+l,320+h+t,15);


setfillstyle(1,WHITE);

floodfill(60+l,320+h-35,15);


//########################### 3rd STAGE ##############################


line(38+l,225+h,41+l,152+h);

line(75+l,225+h,72+l,152+h);


t=-182;

line(32+l,328+t+4+h,32+7+l,334+t+h);

line(80+l,328+t+4+h,73+l,334+t+h);

line(76+l,323+t+5+h,71+l,332+t+h);


line(66+l,323+t+4+h,65+l,332+t+h);

line(57+l,323+t+4+h,57+l,332+t-2+h);

line(39+l,323+t+6+h,45+l,332+t+1+h);

line(48+l,323+t+4+h,51+l,332+t+h);

ellipse(57+l,320+t+5+h,360,190,24,5);

ellipse(57+l,327+t+4+h,360,190,24,5);

ellipse(57+l,337+t-1+h,0,170,16,5);

line(32+l,320+t+6+h,32+l,328+t+3+h);

line(81+l,320+t+6+h,81+l,327+t+3+h);

setfillstyle(6,WHITE);

floodfill(60+l,322+h+t,15);


setfillstyle(1,WHITE);

floodfill(60+l,322+h+t+30,15);


ellipse(51+l,132+h,340,216,4,15);

ellipse(62+l,131+h,327,216,4,15);

ellipse(72+l,132+h,327,216,2,15);

ellipse(42+l,132+h,327,216,2,15);

ellipse(57+l,107+h,0,170,18,5);

line(40+l,107+h,40+l,140+h);

line(75+l,107+h,75+l,140+h);

line(34+l,107+h,40+l,107+h);

line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);

line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);

line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);

line(58+l,95+h,81+l,98+h);


//##########################~~~~TOMB~~~~#####################################

ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);


line(58+l,61+h,58+l,63+h);

circle(58+l,58+h,3);

line(58+l,55+h,58+l,53+h);

circle(58+l,50+h,2);

line(58+l,48+h,58+l,47+h);

circle(58+l,45+h,1);

line(58+l,44+h,58+l,42+h);

setfillstyle(1,WHITE);

floodfill(60+l-2,322+h+t-60,15);


setfillstyle(1,WHITE);

floodfill(60+l-2,322+h+t-30,15);


//##########################~~~~TOWER COMPLETED~~~~#################################


l=547;

//###########################~~~~CONSTRUCTION OF SECOND TOWER~~~~###################

line(28+l,400+h,33+l,333+h);
line(86+l,400+h,80+l,333+h);

line(23+l,328+h,32+l,334+h);

//########################## 1st STAGE ###########################


line(90+l,328+h,80+l,334+h);

line(83+l,323+h,75+l,334+h);

line(75+l,323+h,70+l,332+h);

line(66+l,323+h,65+l,332+h);

line(57+l,323+h,57+l,332+h);

line(30+l,323+h,39+l,334+h);

line(38+l,323+h,45+l,332+h);

line(48+l,323+h,51+l,332+h);


ellipse(57+l,320+h,350,190,34,5);

ellipse(57+l,327+h,350,190,34,5);

ellipse(57+l,337+h,0,180,24,5);

line(22+l,320+h,22+l,328+h);

line(91+l,320+h,91+l,327+h);

setfillstyle(6,WHITE);

floodfill(60+l,320+h,15);


setfillstyle(1,WHITE);

floodfill(60+l,320+h+15,15);

//################################### 2nd STAGE ###############################


line(35+l,315+h,38+l,242+h);

line(80+l,315+h,75+l,242+h);

t=-93;


line(23+4+l,328+t+3+h,32+5+l,334+t+h);

line(88+l,328+t+2+h,76+l,334+t+h);


line(78+l,323+t+3+h,71+l,332+t+h);

line(66+l,323+t+2+h,65+l,332+t+h);

line(57+l,323+t+2+h,57+l,332+t-2+h);

line(35+l,323+t+3+h,45-3+l,332+t+h);

line(48+l,323+t+2+h,51+l,332+t-2+h);

ellipse(57+l,320+t+3+h,360,190,30,5);

ellipse(57+l,327+t+3+h,360,190,30,5);

ellipse(57+l,337+t-1+h,0,180,18,5);

line(26+l,320+t+3+h,26+l,328+t+2+h);

line(88+l,320+t+3+h,88+l,327+t+3+h);


setfillstyle(6,WHITE);

floodfill(60+l,320+h+t,15);


setfillstyle(1,WHITE);

floodfill(60+l,320+h-35,15);


//######################################### 3rd STAGE ###################################


line(38+l,225+h,41+l,152+h);

line(75+l,225+h,72+l,152+h);

t=-182;


line(32+l,328+t+4+h,32+7+l,334+t+h);

line(80+l,328+t+4+h,73+l,334+t+h);

line(76+l,323+t+5+h,71+l,332+t+h);

line(66+l,323+t+4+h,65+l,332+t+h);

line(57+l,323+t+4+h,57+l,332+t-2+h);

line(39+l,323+t+6+h,45+l,332+t+1+h);

line(48+l,323+t+4+h,51+l,332+t+h);

ellipse(57+l,320+t+5+h,360,190,24,5);

ellipse(57+l,327+t+4+h,360,190,24,5);

ellipse(57+l,337+t-1+h,0,170,16,5);


line(32+l,320+t+6+h,32+l,328+t+3+h);

line(81+l,320+t+6+h,81+l,327+t+3+h);


setfillstyle(6,WHITE);

floodfill(60+l,322+h+t,15);


setfillstyle(1,WHITE);

floodfill(60+l,322+h+t+30,15);



ellipse(51+l,132+h,340,216,4,15);

ellipse(62+l,131+h,327,216,4,15);

ellipse(72+l,132+h,327,216,2,15);

ellipse(42+l,132+h,327,216,2,15);

ellipse(57+l,107+h,0,170,18,5);

line(40+l,107+h,40+l,140+h);

line(75+l,107+h,75+l,140+h);


line(34+l,107+h,40+l,107+h);

line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);

line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);

line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);

line(58+l,95+h,81+l,98+h);

//##########################~~~~TOMB~~~~########################


ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);

line(58+l,61+h,58+l,63+h);

circle(58+l,58+h,3);

line(58+l,55+h,58+l,53+h);

circle(58+l,50+h,2);

line(58+l,48+h,58+l,47+h);

circle(58+l,45+h,1);

line(58+l,44+h,58+l,42+h);

setfillstyle(1,WHITE);

floodfill(60+l-2,322+h+t-60,15);


setfillstyle(1,WHITE);

floodfill(60+l-2,322+h+t-30,15);

//##########################~~~~2ND TOWER COMPLETE~~~~########################


//##########################~~~~CONSTRUCTION OF 3RD TOWER~~~~#################

l=50;
h=70;

line(34+l,107+h,28+l,102+h);

line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);

line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);

line(58+l,95+h,81+l,98+h);

line(35+l,315+h,38+l,242+h);

line(80+l,315+h,75+l,242+h);

t=-93;

ellipse(57+l,320+t+3+h,360,190,30,5);
ellipse(57+l,327+t+3+h,360,190,30,5);

line(28+l,370+h,33+l,333+h);

line(86+l,370+h,80+l,333+h);

//############### 1st STAGE ######################


line(23+l,328+h,32+l,334+h);

line(90+l,328+h,80+l,334+h);

line(83+l,323+h,75+l,334+h);

line(75+l,323+h,70+l,332+h);

line(66+l,323+h,65+l,332+h);

line(57+l,323+h,57+l,332+h);

line(30+l,323+h,39+l,334+h);

line(38+l,323+h,45+l,332+h);

line(48+l,323+h,51+l,332+h);

ellipse(57+l,320+h,350,190,34,5);

ellipse(57+l,327+h,350,190,34,5);

ellipse(57+l,337+h,0,180,24,5);

line(22+l,320+h,22+l,328+h);

line(91+l,320+h,91+l,327+h);

setfillstyle(6,WHITE);

floodfill(60+l,320+h,15);

setfillstyle(1,WHITE);

floodfill(60+l,320+h+15,15);

//######################## 2ND STAGE ##########################


line(35+l,315+h,38+l,242+h);

line(80+l,315+h,75+l,242+h);

t=-93;


line(23+4+l,328+t+3+h,32+5+l,334+t+h);

line(88+l,328+t+2+h,76+l,334+t+h);

line(78+l,323+t+3+h,71+l,332+t+h);

line(66+l,323+t+2+h,65+l,332+t+h);

line(57+l,323+t+2+h,57+l,332+t-2+h);

line(35+l,323+t+3+h,45-3+l,332+t+h);
line(48+l,323+t+2+h,51+l,332+t-2+h);

ellipse(57+l,320+t+3+h,360,190,30,5);

ellipse(57+l,327+t+3+h,360,190,30,5);

ellipse(57+l,337+t-1+h,0,180,18,5);

line(26+l,320+t+3+h,26+l,328+t+2+h);

line(88+l,320+t+3+h,88+l,327+t+3+h);

setfillstyle(6,WHITE);

floodfill(60+l,320+h+t,15);


setfillstyle(1,WHITE);

floodfill(60+l,320+h-35,15);


//########################### 3rd STAGE ##############################


line(38+l,225+h,41+l,152+h);

line(75+l,225+h,72+l,152+h);


t=-182;

line(32+l,328+t+4+h,32+7+l,334+t+h);

line(80+l,328+t+4+h,73+l,334+t+h);

line(76+l,323+t+5+h,71+l,332+t+h);


line(66+l,323+t+4+h,65+l,332+t+h);

line(57+l,323+t+4+h,57+l,332+t-2+h);

line(39+l,323+t+6+h,45+l,332+t+1+h);

line(48+l,323+t+4+h,51+l,332+t+h);

ellipse(57+l,320+t+5+h,360,190,24,5);

ellipse(57+l,327+t+4+h,360,190,24,5);

ellipse(57+l,337+t-1+h,0,170,16,5);

line(32+l,320+t+6+h,32+l,328+t+3+h);

line(81+l,320+t+6+h,81+l,327+t+3+h);

setfillstyle(6,WHITE);

floodfill(60+l,322+h+t,15);


setfillstyle(1,WHITE);

floodfill(60+l,322+h+t+30,15);


ellipse(51+l,132+h,340,216,4,15);

ellipse(62+l,131+h,327,216,4,15);

ellipse(72+l,132+h,327,216,2,15);

ellipse(42+l,132+h,327,216,2,15);

ellipse(57+l,107+h,0,170,18,5);

line(40+l,107+h,40+l,140+h);

line(75+l,107+h,75+l,140+h);

line(34+l,107+h,40+l,107+h);

line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);

line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);

line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);

line(58+l,95+h,81+l,98+h);


//##########################~~~~TOMB~~~~#####################################

ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);


line(58+l,61+h,58+l,63+h);

circle(58+l,58+h,3);

line(58+l,55+h,58+l,53+h);

circle(58+l,50+h,2);

line(58+l,48+h,58+l,47+h);

circle(58+l,45+h,1);

line(58+l,44+h,58+l,42+h);

setfillstyle(1,WHITE);

floodfill(60+l-2,322+h+t-60,15);


setfillstyle(1,WHITE);

floodfill(60+l-2,322+h+t-30,15);

//####################~~~~3RD TOWER COMPLETED~~~~####################


//#######################~~~~CONSTRUCTION OF FOURTH TOWER~~~~##################
l=480;
h=70;

line(34+l,107+h,28+l,102+h);

line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);

line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);

line(58+l,95+h,81+l,98+h);

line(35+l,315+h,38+l,242+h);

line(80+l,315+h,75+l,242+h);

t=-93;

ellipse(57+l,320+t+3+h,360,190,30,5);
ellipse(57+l,327+t+3+h,360,190,30,5);

line(28+l,370+h,33+l,333+h);

line(86+l,370+h,80+l,333+h);

//############### 1st STAGE ######################


line(23+l,328+h,32+l,334+h);

line(90+l,328+h,80+l,334+h);

line(83+l,323+h,75+l,334+h);

line(75+l,323+h,70+l,332+h);

line(66+l,323+h,65+l,332+h);

line(57+l,323+h,57+l,332+h);

line(30+l,323+h,39+l,334+h);

line(38+l,323+h,45+l,332+h);

line(48+l,323+h,51+l,332+h);

ellipse(57+l,320+h,350,190,34,5);

ellipse(57+l,327+h,350,190,34,5);

ellipse(57+l,337+h,0,180,24,5);

line(22+l,320+h,22+l,328+h);

line(91+l,320+h,91+l,327+h);

setfillstyle(6,WHITE);

floodfill(60+l,320+h,15);

setfillstyle(1,WHITE);

floodfill(60+l,320+h+15,15);

//######################## 2ND STAGE ##########################


line(35+l,315+h,38+l,242+h);

line(80+l,315+h,75+l,242+h);

t=-93;


line(23+4+l,328+t+3+h,32+5+l,334+t+h);

line(88+l,328+t+2+h,76+l,334+t+h);

line(78+l,323+t+3+h,71+l,332+t+h);

line(66+l,323+t+2+h,65+l,332+t+h);

line(57+l,323+t+2+h,57+l,332+t-2+h);

line(35+l,323+t+3+h,45-3+l,332+t+h);
line(48+l,323+t+2+h,51+l,332+t-2+h);

ellipse(57+l,320+t+3+h,360,190,30,5);

ellipse(57+l,327+t+3+h,360,190,30,5);

ellipse(57+l,337+t-1+h,0,180,18,5);

line(26+l,320+t+3+h,26+l,328+t+2+h);

line(88+l,320+t+3+h,88+l,327+t+3+h);

setfillstyle(6,WHITE);

floodfill(60+l,320+h+t,15);


setfillstyle(1,WHITE);

floodfill(60+l,320+h-35,15);


//########################### 3rd STAGE ##############################


line(38+l,225+h,41+l,152+h);

line(75+l,225+h,72+l,152+h);


t=-182;

line(32+l,328+t+4+h,32+7+l,334+t+h);

line(80+l,328+t+4+h,73+l,334+t+h);

line(76+l,323+t+5+h,71+l,332+t+h);


line(66+l,323+t+4+h,65+l,332+t+h);

line(57+l,323+t+4+h,57+l,332+t-2+h);

line(39+l,323+t+6+h,45+l,332+t+1+h);

line(48+l,323+t+4+h,51+l,332+t+h);

ellipse(57+l,320+t+5+h,360,190,24,5);

ellipse(57+l,327+t+4+h,360,190,24,5);

ellipse(57+l,337+t-1+h,0,170,16,5);

line(32+l,320+t+6+h,32+l,328+t+3+h);

line(81+l,320+t+6+h,81+l,327+t+3+h);

setfillstyle(6,WHITE);

floodfill(60+l,322+h+t,15);


setfillstyle(1,WHITE);

floodfill(60+l,322+h+t+30,15);


ellipse(51+l,132+h,340,216,4,15);

ellipse(62+l,131+h,327,216,4,15);

ellipse(72+l,132+h,327,216,2,15);

ellipse(42+l,132+h,327,216,2,15);

ellipse(57+l,107+h,0,170,18,5);

line(40+l,107+h,40+l,140+h);

line(75+l,107+h,75+l,140+h);

line(34+l,107+h,40+l,107+h);

line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);

line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);

line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);

line(58+l,95+h,81+l,98+h);


//##########################~~~~TOMB~~~~#####################################

ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);


line(58+l,61+h,58+l,63+h);

circle(58+l,58+h,3);

line(58+l,55+h,58+l,53+h);

circle(58+l,50+h,2);

line(58+l,48+h,58+l,47+h);

circle(58+l,45+h,1);

line(58+l,44+h,58+l,42+h);

setfillstyle(1,WHITE);

floodfill(60+l-2,322+h+t-60,15);


setfillstyle(1,WHITE);

floodfill(60+l-2,322+h+t-30,15);


//############### TAJ MAHAL #################

rectangle(275,290,365,440);
rectangle(268,283,372,440);
setfillstyle(6,WHITE);
floodfill(274,294,15);

line(280,440,280,350);
ellipse(315,349,130,180,35,40);
ellipse(275,280,290,326,53,40);
line(360,440,360,350);
ellipse(325,349,360,50,35,40);
ellipse(361,280,216,255,53,40);
setfillstyle(9,WHITE);
floodfill(277,386,15);

line(280,360,359,360);
line(280,364,359,364);
//setfillstyle(1,WHITE);
//floodfill(274,294,15);

/*line(280,440,280,350);
ellipse(315,349,130,180,35,40);
ellipse(275,280,290,326,53,40);

line(360,440,360,350);
ellipse(325,349,360,50,35,40);
ellipse(361,280,216,255,53,40);
setfillstyle(9,12);
floodfill(277,386,15);

putpixel(277,386,14);
line(280,360,359,360);
line(280,364,359,364);*/
setfillstyle(1,WHITE);
floodfill(281,362,15);
rectangle(295+4,370,345-4,440);
rectangle(292+4,367,348-4,440);
setfillstyle(1,WHITE);
floodfill(294+4,369,15);

rectangle(296,378,344,318);
setfillstyle(7,15);
floodfill(289,350,15);
setfillstyle(7,15);
floodfill(322,310,15);

setfillstyle(7,15);
floodfill(351,346,15);

setfillstyle(0,WHITE);
floodfill(301,379,15);
line(302,405,302,440);
line(338,405,338,440);
ellipse(327,405,108,180,25,20);
ellipse(313,405,360,74,25,20);

line(329,390,329,440);
line(310,391,310,440);
line(311,402,329,402);
line(311,422,329,422);
line(302,412,310,412);
line(329,412,338,412);

line(302,428,310,428);
line(329,428,338,428);

int p=-60;

line(302,405+p,302,440+p-20);
line(338,405+p,338,440+p-20);
ellipse(327,405+p,108,180,25,20);
ellipse(313,405+p,360,74,25,20);
setfillstyle(7,WHITE);
floodfill(311,406,15);

line(329,390+p,329,440+p-20);
line(310,391+p,310,440+p-20);
line(311,402+p,329,402+p);
line(311,422+p-7,329,422+p-7);
line(302,412+p,310,412+p);
line(329,412+p,338,412+p);

//SECOND PORTION

rectangle(240,260,400,440);
rectangle(230,250,410,440);
//rectangle(245,425,275,440);
setfillstyle(6,WHITE);
floodfill(231,426,15);
//rectangle(230,425,275,440);
setfillstyle(1,WHITE);
floodfill(231+160,426,15);
}
void main()
{
taj();
getch();
closegraph();
}