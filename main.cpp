#include <GL/gl.h>
#include<GL\glut.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#define pi 3.142857
#include<iostream>
using namespace std;

int x=0;
int y=0;
int r=0;
int s=0;


void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(0, 1200, 0, 900);
}



void circle_kon(int h, int k, int rx,int ry)    //Works
{
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
    //glColor3f(1.0, .60, 0.0);
    glBegin(GL_POLYGON);
    for(int i=1; i<=360; i++)
    {
        glVertex2f(h+rx*cos(3.14159*i/180),k+ry*sin(3.14159*i/180));
    }
    //glEnd();

    glFlush();

}


void display(void)
{

    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);
//sky
    glColor3ub (0, 214, 249);
    glBegin(GL_POLYGON);
    glVertex2d (0,550);
    glVertex2d (0,900);
    glVertex2d (1200,900);
    glVertex2d (1200,550);
    glEnd();

//land
    glColor3ub (218, 208, 169);
    glBegin(GL_POLYGON);
    glVertex2d (0,0);
    glVertex2d (0,562);
    glVertex2d (1200,562);
    glVertex2d (1200,0);
    glEnd();
//sea
    glColor3ub (174, 214, 241);
    glBegin(GL_POLYGON);
    glVertex2d (500,0);
    glVertex2d (550,100);
    glVertex2d (650,200);
    glVertex2d (750,300);
    glVertex2d (850,400);
    glVertex2d (950,450);
    glVertex2d (1200,500);
    glVertex2d (1200,0);
    glEnd();
//ship 1
//layer 1
    glColor3ub(11, 11, 10);
    glBegin(GL_POLYGON);
    glVertex2d(x+720, 45);
    glVertex2d(x+790, 45);
    glVertex2d(x+820, 70);
    glVertex2d(x+690, 70);
    glEnd();

//layer 2
    glColor3ub(131, 145, 146);
    glBegin(GL_POLYGON);
    glVertex2d(x+710, 70);
    glVertex2d(x+800, 70);
    glVertex2d(x+800, 88);
    glVertex2d(x+710, 88);
    glEnd();

//layer 3
    glColor3ub(11, 11, 10);
    glBegin(GL_POLYGON);
    glVertex2d(x+720, 88);
    glVertex2d(x+790, 88);
    glVertex2d(x+790, 100);
    glVertex2d(x+720, 100);
    glEnd();

//layer 4
    glColor3ub(11, 11, 10);
    glBegin(GL_POLYGON);
    glVertex2d(x+732, 100);
    glVertex2d(x+742, 100);
    glVertex2d(x+742, 115);
    glVertex2d(x+732, 115);
    glEnd();
    //layer 5
    glColor3ub(209, 231, 18);
    glBegin(GL_POLYGON);
    glVertex2d(x+732, 115);
    glVertex2d(x+742, 115);
    glVertex2d(x+742, 120);
    glVertex2d(x+732, 120);
    glEnd();
//layer 6
    glColor3ub(11, 11, 10);
    glBegin(GL_POLYGON);
    glVertex2d(x+752, 100);
    glVertex2d(x+762, 100);
    glVertex2d(x+762, 115);
    glVertex2d(x+752,115);
    glEnd();
    //layer 7
    glColor3ub(209, 231, 18);
    glBegin(GL_POLYGON);
    glVertex2d(x+752, 115);
    glVertex2d(x+762, 115);
    glVertex2d(x+762, 120);
    glVertex2d(x+752, 120);
    glEnd();
//layer 8
    glColor3ub(11, 11, 10);
    glBegin(GL_POLYGON);
    glVertex2d(x+772, 100);
    glVertex2d(x+782, 100);
    glVertex2d(x+782, 115);
    glVertex2d(x+772, 115);
    glEnd();
    //layer 9
    glColor3ub(209, 231, 18);
    glBegin(GL_POLYGON);
    glVertex2d(x+772, 115);
    glVertex2d(x+782, 115);
    glVertex2d(x+782, 120);
    glVertex2d(x+772, 120);
    glEnd();

//ship 2
//layer 1
    glColor3ub(11, 11, 10);
    glBegin(GL_POLYGON);
    glVertex2d(720, 225);
    glVertex2d(790, 225);
    glVertex2d(820, 250);
    glVertex2d(690, 250);
    glEnd();

//layer 2
    glColor3ub(131, 145, 146);
    glBegin(GL_POLYGON);
    glVertex2d(710, 250);
    glVertex2d(800, 250);
    glVertex2d(800, 268);
    glVertex2d(710, 268);
    glEnd();

//layer 3
    glColor3ub(11, 11, 10);
    glBegin(GL_POLYGON);
    glVertex2d(720, 268);
    glVertex2d(790, 268);
    glVertex2d(790, 280);
    glVertex2d(720, 280);
    glEnd();

//layer 4
    glColor3ub(11, 11, 10);
    glBegin(GL_POLYGON);
    glVertex2d(732, 280);
    glVertex2d(742, 280);
    glVertex2d(742, 295);
    glVertex2d(732, 295);
    glEnd();
    //layer 5
    glColor3ub(209, 231, 18);
    glBegin(GL_POLYGON);
    glVertex2d(732, 295);
    glVertex2d(742, 295);
    glVertex2d(742, 300);
    glVertex2d(732, 300);
    glEnd();
//layer 6
    glColor3ub(11, 11, 10);
    glBegin(GL_POLYGON);
    glVertex2d(752, 280);
    glVertex2d(762, 280);
    glVertex2d(762, 295);
    glVertex2d(752, 295);
    glEnd();
    //layer 7
    glColor3ub(209, 231, 18);
    glBegin(GL_POLYGON);
    glVertex2d(752, 295);
    glVertex2d(762, 295);
    glVertex2d(762, 300);
    glVertex2d(752, 300);
    glEnd();
//layer 8
    glColor3ub(11, 11, 10);
    glBegin(GL_POLYGON);
    glVertex2d(772, 280);
    glVertex2d(782, 280);
    glVertex2d(782, 295);
    glVertex2d(772, 295);
    glEnd();
    //layer 9
    glColor3ub(209, 231, 18);
    glBegin(GL_POLYGON);
    glVertex2d(772, 295);
    glVertex2d(782, 295);
    glVertex2d(782, 300);
    glVertex2d(772, 300);
    glEnd();
//ship 3
//layer 1
    glColor3ub(52, 73, 94);
    glBegin(GL_POLYGON);
    glVertex2d(x+920, 355);
    glVertex2d(x+990, 355);
    glVertex2d(x+1020, 375);
    glVertex2d(x+890, 375);
    glEnd();
//layer 2
    glColor3ub(233, 30, 99);
    glBegin(GL_POLYGON);
    glVertex2d(x+960, 375);
    glVertex2d(x+910, 375);
    glVertex2d(x+960, 430);
    glEnd();
//layer 3
    glColor3ub(223, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2d(x+965, 375);
    glVertex2d(x+990, 375);
    glVertex2d(x+965, 400);
    glEnd();
//sun
    glColor3f(255,140,0);
    circle_kon(x+40, y+840, 40,50);
    glEnd();
//cloud
    glColor3f(255,255,255);
    circle_kon(x-70, 790,30,25);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(x-60, 790,25,35);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(x-50, 790,30,25);
    glEnd();
//cloud
    glColor3f(255,255,255);
    circle_kon(x+400, 790,30,25);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(x+410,790,25,35);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(x+420, 790,30,25);
    glEnd();
//cloud
    glColor3f(255,255,255);
    circle_kon(x+450, 810,30,25);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(x+460,810,25,35);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(x+470, 810,30,25);
    glEnd();

//cloud
    glColor3f(255,255,255);
    circle_kon(x+950, 810,30,25);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(x+960,810,25,35);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(x+970, 810,30,25);
    glEnd();
//cloud
    glColor3f(255,255,255);
    circle_kon(x+80, 810,30,25);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(x+90, 810,25,35);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(x+100, 810,30,25);
    glEnd();
//road
    glColor3ub (121, 125, 127);
    glBegin(GL_POLYGON);
    glVertex2d (0,500);
    glVertex2d (1200,500);
    glVertex2d (1200,550);
    glVertex2d (0,550);
    glEnd();
//road-1
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (0,520);
    glVertex2d (40,520);
    glVertex2d (40,527);
    glVertex2d (0,527);
    glEnd();
//road-2
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (70,520);
    glVertex2d (120,520);
    glVertex2d (120,527);
    glVertex2d (70,527);
    glEnd();
//road-3
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (180,520);
    glVertex2d (210,520);
    glVertex2d (210,527);
    glVertex2d (180,527);
    glEnd();
//road-4
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (260,520);
    glVertex2d (290,520);
    glVertex2d (290,527);
    glVertex2d (260,527);
    glEnd();
//road-5
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (330,520);
    glVertex2d (370,520);
    glVertex2d (370,527);
    glVertex2d (330,527);
    glEnd();
//road-6
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (410,520);
    glVertex2d (450,520);
    glVertex2d (450,527);
    glVertex2d (410,527);
    glEnd();
//road-7
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (490,520);
    glVertex2d (530,520);
    glVertex2d (530,527);
    glVertex2d (490,527);
    glEnd();
//road-8
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (580,520);
    glVertex2d (620,520);
    glVertex2d (620,527);
    glVertex2d (580,527);
    glEnd();
//road-9
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (660,520);
    glVertex2d (690,520);
    glVertex2d (690,527);
    glVertex2d (660,527);
    glEnd();
//road-10
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (690,520);
    glVertex2d (730,520);
    glVertex2d (730,527);
    glVertex2d (690,527);
    glEnd();
//road-11
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (770,520);
    glVertex2d (800,520);
    glVertex2d (800,527);
    glVertex2d (770,527);
    glEnd();
//road-12
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (850,520);
    glVertex2d (890,520);
    glVertex2d (890,527);
    glVertex2d (850,527);
    glEnd();
//road-12
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (940,520);
    glVertex2d (990,520);
    glVertex2d (990,527);
    glVertex2d (940,527);
    glEnd();
//road-13
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (1020,520);
    glVertex2d (1060,520);
    glVertex2d (1060,527);
    glVertex2d (1020,527);
    glEnd();
//road-14
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (1100,520);
    glVertex2d (1140,520);
    glVertex2d (1140,527);
    glVertex2d (1100,527);
    glEnd();
//road-14
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (1170,520);
    glVertex2d (1200,520);
    glVertex2d (1200,527);
    glVertex2d (1170,527);
    glEnd();
//rail line
    glColor3ub (52, 73, 94);
    glBegin(GL_POLYGON);
    glVertex2d (0,560);
    glVertex2d (0,562);
    glVertex2d (1200,562);
    glVertex2d (1200,560);
    glEnd();
    glLineWidth(3.0f);
    glColor3ub (52, 73, 94);
    glBegin(GL_LINES);
    glVertex2d(10, 550);
    glVertex2d(10, 560);
    glVertex2d(30, 550);
    glVertex2d(30, 560);
    glVertex2d(50, 550);
    glVertex2d(50, 560);
    glVertex2d(70, 550);
    glVertex2d(70, 560);
    glVertex2d(90, 550);
    glVertex2d(90, 560);
    glVertex2d(110, 550);
    glVertex2d(110, 560);
    glVertex2d(130, 550);
    glVertex2d(130, 560);
    glVertex2d(150, 550);
    glVertex2d(150, 560);
    glVertex2d(170, 550);
    glVertex2d(170, 560);
    glVertex2d(190, 550);
    glVertex2d(190, 560);
    glVertex2d(210, 550);
    glVertex2d(210, 560);
    glVertex2d(230, 550);
    glVertex2d(230, 560);
    glVertex2d(250, 550);
    glVertex2d(250, 560);
    glVertex2d(270, 550);
    glVertex2d(270, 560);
    glVertex2d(290, 550);
    glVertex2d(290, 560);
    glVertex2d(310, 550);
    glVertex2d(310, 560);
    glVertex2d(330, 550);
    glVertex2d(330, 560);
    glVertex2d(350, 550);
    glVertex2d(350, 560);
    glVertex2d(370, 550);
    glVertex2d(370, 560);
    glVertex2d(390, 550);
    glVertex2d(390, 560);
    glVertex2d(410, 550);
    glVertex2d(410, 560);
    glVertex2d(430, 550);
    glVertex2d(430, 560);
    glVertex2d(450, 550);
    glVertex2d(450, 560);
    glVertex2d(470, 550);
    glVertex2d(470, 560);
    glVertex2d(490, 550);
    glVertex2d(490, 560);
    glVertex2d(510, 550);
    glVertex2d(510, 560);
    glVertex2d(530, 550);
    glVertex2d(530, 560);
    glVertex2d(550, 550);
    glVertex2d(550, 560);
    glVertex2d(570, 550);
    glVertex2d(570, 560);
    glVertex2d(590, 550);
    glVertex2d(590, 560);
    glVertex2d(610, 550);
    glVertex2d(610, 560);
    glVertex2d(630, 550);
    glVertex2d(630, 560);
    glVertex2d(650, 550);
    glVertex2d(650, 560);
    glVertex2d(670, 550);
    glVertex2d(670, 560);
    glVertex2d(690, 550);
    glVertex2d(690, 560);
    glVertex2d(710, 550);
    glVertex2d(710, 560);
    glVertex2d(730, 550);
    glVertex2d(730, 560);
    glVertex2d(750, 550);
    glVertex2d(750, 560);
    glVertex2d(770, 550);
    glVertex2d(770, 560);
    glVertex2d(790, 550);
    glVertex2d(790, 560);
    glVertex2d(810, 550);
    glVertex2d(810, 560);
    glVertex2d(830, 550);
    glVertex2d(830, 560);
    glVertex2d(850, 550);
    glVertex2d(850, 560);
    glVertex2d(870, 550);
    glVertex2d(870, 560);
    glVertex2d(890, 550);
    glVertex2d(890, 560);
    glVertex2d(910, 550);
    glVertex2d(910, 560);
    glVertex2d(930, 550);
    glVertex2d(930, 560);
    glVertex2d(950, 550);
    glVertex2d(950, 560);
    glVertex2d(970, 550);
    glVertex2d(970, 560);
    glVertex2d(990, 550);
    glVertex2d(990, 560);
    glVertex2d(1010, 550);
    glVertex2d(1010, 560);
    glVertex2d(1030, 550);
    glVertex2d(1030, 560);
    glVertex2d(1050, 550);
    glVertex2d(1050, 560);
    glVertex2d(1070, 550);
    glVertex2d(1070, 560);
    glVertex2d(1090, 550);
    glVertex2d(1090, 560);
    glVertex2d(1110, 550);
    glVertex2d(1110, 560);
    glVertex2d(1130, 550);
    glVertex2d(1130, 560);
    glVertex2d(1150, 550);
    glVertex2d(1150, 560);
    glVertex2d(1170, 550);
    glVertex2d(1170, 560);
    glVertex2d(1190, 550);
    glVertex2d(1190, 560);
    glEnd();
//rail-1
    glColor3ub (25, 111, 61);
    glBegin(GL_POLYGON);
    glVertex2d (r+1070,567);
    glVertex2d (r+1120,567);
    glVertex2d (r+1120,605);
    glVertex2d (r+1070,605);
    glEnd();

    glColor3f(153, 163, 164);
    circle_kon(r+1120, 567,8,8);
    glEnd();

    glColor3f(44, 62, 80);
    circle_kon(r+1120, 567,3,3);
    glEnd();

    glColor3f(153, 163, 164);
    circle_kon(r+1070, 567,8,8);
    glEnd();
    glColor3f(44, 62, 80);
    circle_kon(r+1070, 567,3,3);
    glEnd();

    glColor3ub (231, 76, 60);
    glBegin(GL_POLYGON);
    glVertex2d (r+1060,605);
    glVertex2d (r+1130,605);
    glVertex2d (r+1130,620);
    glVertex2d (r+1060,620);
    glEnd();

    glColor3ub (244, 208, 63);
    glBegin(GL_POLYGON);
    glVertex2d (r+1085,585);
    glVertex2d (r+1105,585);
    glVertex2d (r+1105,595);
    glVertex2d (r+1085,595);
    glEnd();




//rail-2
    glColor3ub (25, 111, 61);
    glBegin(GL_POLYGON);
    glVertex2d (r+990,567);
    glVertex2d (r+1040,567);
    glVertex2d (r+1040,605);
    glVertex2d (r+990,605);
    glEnd();

    glColor3f(255,255,255);
    circle_kon(r+1040, 567,8,8);
    glEnd();

    glColor3f(255,255,255);
    circle_kon(r+990, 567,8,8);
    glEnd();

    glColor3ub (231, 76, 60);
    glBegin(GL_POLYGON);
    glVertex2d (r+980,605);
    glVertex2d (r+1050,605);
    glVertex2d (r+1050,620);
    glVertex2d (r+980,620);
    glEnd();

    glColor3ub (231, 76, 60);
    glBegin(GL_POLYGON);
    glVertex2d (r+1050,605);
    glVertex2d (r+1025,605);
    glVertex2d (r+1025,620);
    glVertex2d (r+1050,620);
    glEnd();

    glColor3ub (244, 208, 63);
    glBegin(GL_POLYGON);
    glVertex2d (r+1005,585);
    glVertex2d (r+1025,585);
    glVertex2d (r+1025,595);
    glVertex2d (r+1005,595);
    glEnd();

    glLineWidth(5.0f);
    glColor3ub (52, 73, 94);
    glBegin(GL_LINES);
    glVertex2d(r+1070, 580);
    glVertex2d(r+1040, 580);
    glEnd();

//rail-3
    glColor3ub (25, 111, 61);
    glBegin(GL_POLYGON);
    glVertex2d (r+910,567);
    glVertex2d (r+960,567);
    glVertex2d (r+960,605);
    glVertex2d (r+910,605);
    glEnd();
//rail-2
    glColor3ub (25, 111, 61);
    glBegin(GL_POLYGON);
    glVertex2d (r+910,567);
    glVertex2d (r+875,567);
    glVertex2d (r+875,595);
    glVertex2d (r+910,595);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(r+960, 567,8,8);
    glEnd();

    glColor3f(255,255,255);
    circle_kon(r+910, 567,8,8);
    glEnd();

    glColor3ub (231, 76, 60);
    glBegin(GL_POLYGON);
    glVertex2d (r+900,605);
    glVertex2d (r+970,605);
    glVertex2d (r+970,620);
    glVertex2d (r+900,620);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(r+1120, 567,8,8);
    glEnd();
    glColor3f(255,255,255);
    circle_kon(r+1070, 567,8,8);
    glEnd();

    glColor3ub (244, 208, 63);
    glBegin(GL_POLYGON);
    glVertex2d (r+925,585);
    glVertex2d (r+945,585);
    glVertex2d (r+945,595);
    glVertex2d (r+925,595);
    glEnd();
    glLineWidth(5.0f);
    glColor3ub (52, 73, 94);
    glBegin(GL_LINES);
    glVertex2d(r+990, 580);
    glVertex2d(r+960, 580);
    glEnd();

//light
    glColor3ub (46, 64, 83);
    glBegin(GL_POLYGON);
    glVertex2d (55,550);
    glVertex2d (60,550);
    glVertex2d (60,600);
    glVertex2d (55,600);
    glEnd();
    //light-bulb
    glColor3ub (247, 220, 111);
    glBegin(GL_POLYGON);
    glVertex2d (45,600);
    glVertex2d (70,600);
    glVertex2d (70,612);
    glVertex2d (45,612);
    glEnd();
    //light-bulb_1
    glColor3ub (46, 64, 83);
    glBegin(GL_POLYGON);
    glVertex2d (53,600);
    glVertex2d (63,600);
    glVertex2d (63,612);
    glVertex2d (53,612);
    glEnd();
//tree

    glColor3ub (122, 83, 19);
    glBegin(GL_POLYGON);
    glVertex2d (130,550);
    glVertex2d (140,550);
    glVertex2d (140,600);
    glVertex2d (130,600);
    glEnd();

    glColor3ub (34, 153, 84);
    glBegin(GL_POLYGON);
    glVertex2d (110,600);
    glVertex2d (160,600);
    glVertex2d (135,650);
    glEnd();

    glColor3ub (34, 153, 84);
    glBegin(GL_POLYGON);
    glVertex2d (120,630);
    glVertex2d (150,630);
    glVertex2d (135,700);
    glEnd();
//tree1

    glColor3ub (122, 83, 19);
    glBegin(GL_POLYGON);
    glVertex2d (180,550);
    glVertex2d (190,550);
    glVertex2d (190,600);
    glVertex2d (180,600);
    glEnd();

    glColor3ub (34, 153, 84);
    glBegin(GL_POLYGON);
    glVertex2d (160,600);
    glVertex2d (210,600);
    glVertex2d (185,650);
    glEnd();

    glColor3ub (34, 153, 84);
    glBegin(GL_POLYGON);
    glVertex2d (170,630);
    glVertex2d (200,630);
    glVertex2d (185,700);
    glEnd();

//light-1
    glColor3ub (46, 64, 83);
    glBegin(GL_POLYGON);
    glVertex2d (300,550);
    glVertex2d (305,550);
    glVertex2d (305,600);
    glVertex2d (300,600);
    glEnd();
    //light-bulb
    glColor3ub (247, 220, 111);
    glBegin(GL_POLYGON);
    glVertex2d (290,600);
    glVertex2d (315,600);
    glVertex2d (315,612);
    glVertex2d (290,612);
    glEnd();
    //light-bulb_1
    glColor3ub (46, 64, 83);
    glBegin(GL_POLYGON);
    glVertex2d (298,600);
    glVertex2d (308,600);
    glVertex2d (308,612);
    glVertex2d (298,612);
    glEnd();
//tree

    glColor3ub (122, 83, 19);
    glBegin(GL_POLYGON);
    glVertex2d (388,550);
    glVertex2d (398,550);
    glVertex2d (398,600);
    glVertex2d (388,600);
    glEnd();

    glColor3ub (34, 153, 84);
    glBegin(GL_POLYGON);
    glVertex2d (368,600);
    glVertex2d (418,600);
    glVertex2d (393,650);
    glEnd();

    glColor3ub (34, 153, 84);
    glBegin(GL_POLYGON);
    glVertex2d (378,630);
    glVertex2d (408,630);
    glVertex2d (393,700);
    glEnd();
//tree1

    glColor3ub (122, 83, 19);
    glBegin(GL_POLYGON);
    glVertex2d (438,550);
    glVertex2d (448,550);
    glVertex2d (448,600);
    glVertex2d (438,600);
    glEnd();

    glColor3ub (34, 153, 84);
    glBegin(GL_POLYGON);
    glVertex2d (418,600);
    glVertex2d (468,600);
    glVertex2d (443,650);
    glEnd();

    glColor3ub (34, 153, 84);
    glBegin(GL_POLYGON);
    glVertex2d (428,630);
    glVertex2d (458,630);
    glVertex2d (443,700);
    glEnd();

//light-1
    glColor3ub (46, 64, 83);
    glBegin(GL_POLYGON);
    glVertex2d (568,550);
    glVertex2d (573,550);
    glVertex2d (573,600);
    glVertex2d (568,600);
    glEnd();
    //light-bulb
    glColor3ub (247, 220, 111);
    glBegin(GL_POLYGON);
    glVertex2d (558,600);
    glVertex2d (583,600);
    glVertex2d (583,612);
    glVertex2d (558,612);
    glEnd();
    //light-bulb_1
    glColor3ub (46, 64, 83);
    glBegin(GL_POLYGON);
    glVertex2d (565,600);
    glVertex2d (576,600);
    glVertex2d (576,612);
    glVertex2d (565,612);
    glEnd();


//tree

    glColor3ub (122, 83, 19);
    glBegin(GL_POLYGON);
    glVertex2d (643,550);
    glVertex2d (653,550);
    glVertex2d (653,600);
    glVertex2d (643,600);
    glEnd();

    glColor3ub (34, 153, 84);
    glBegin(GL_POLYGON);
    glVertex2d (623,600);
    glVertex2d (673,600);
    glVertex2d (648,650);
    glEnd();

    glColor3ub (34, 153, 84);
    glBegin(GL_POLYGON);
    glVertex2d (633,630);
    glVertex2d (663,630);
    glVertex2d (648,700);
    glEnd();

//tree1

    glColor3ub (122, 83, 19);
    glBegin(GL_POLYGON);
    glVertex2d (693,550);
    glVertex2d (703,550);
    glVertex2d (703,600);
    glVertex2d (693,600);
    glEnd();

    glColor3ub (34, 153, 84);
    glBegin(GL_POLYGON);
    glVertex2d (673,600);
    glVertex2d (723,600);
    glVertex2d (698,650);
    glEnd();

    glColor3ub (34, 153, 84);
    glBegin(GL_POLYGON);
    glVertex2d (683,630);
    glVertex2d (713,630);
    glVertex2d (698,700);
    glEnd();




//car
    glColor3ub (255, 102, 102);
    glBegin(GL_POLYGON);
    glVertex2d (x+150,y+525);
    glVertex2d (x+220,525);
    glVertex2d (x+220,540);
    glVertex2d (x+150,540);
    glEnd();
//window side
    glColor3ub (255, 102, 102);
    glBegin(GL_POLYGON);
    glVertex2d (x+160,540);
    glVertex2d (x+210,540);
    glVertex2d (x+200,560);
    glVertex2d (x+170,560);
    glEnd();
//window 1
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (x+170,542);
    glVertex2d (x+180,542);
    glVertex2d (x+180,555);
    glVertex2d (x+170,555);
    glEnd();
//window 2
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (x+190,542);
    glVertex2d (x+200,542);
    glVertex2d (x+200,555);
    glVertex2d (x+190,555);
    glEnd();

    glColor3f(23, 32, 42);
    circle_kon(x+162, 523,8,8);
    glEnd();

    glColor3f(253, 254, 254);
    circle_kon(x+162, 523,3,3);
    glEnd();


    glColor3f(253, 254, 254);
    circle_kon(x+204, 523,3,3);
    glEnd();
    glColor3f(23, 32, 42);
    circle_kon(x+204, 523,8,8);
    glEnd();

//car-1
    glColor3ub (102, 0, 204);
    glBegin(GL_POLYGON);
    glVertex2d (r+550,550);
    glVertex2d (r+620,550);
    glVertex2d (r+620,565);
    glVertex2d (r+550,565);
    glEnd();
//window side
    glColor3ub (102, 0, 204);
    glBegin(GL_POLYGON);
    glVertex2d (r+560,565);
    glVertex2d (r+610,565);
    glVertex2d (r+600,585);
    glVertex2d (r+570,585);
    glEnd();
//window 1
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (r+570,567);
    glVertex2d (r+580,567);
    glVertex2d (r+580,580);
    glVertex2d (r+570,580);
    glEnd();
//window 2
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (r+590,567);
    glVertex2d (r+600,567);
    glVertex2d (r+600,580);
    glVertex2d (r+590,580);
    glEnd();

    glColor3f(23, 32, 42);
    circle_kon(r+562, 548,8,8);
    glEnd();

    glColor3f(253, 254, 254);
    circle_kon(r+562,548,3,3);
    glEnd();

    glColor3f(23, 32, 42);
    circle_kon(r+604, 548,8,8);
    glEnd();

    glColor3f(253, 254, 254);
    circle_kon(r+604, 548,3,3);
    glEnd();
//road-sub-1
    glColor3ub (121, 125, 127);
    glBegin(GL_POLYGON);
    glVertex2d (210,500);
    glVertex2d (210,0);
    glVertex2d (250,0);
    glVertex2d (250,500);
    glEnd();
//road-sub-2
    glColor3ub (121, 125, 127);
    glBegin(GL_POLYGON);
    glVertex2d (0,260);
    glVertex2d (700,260);
    glVertex2d (665,220);
    glVertex2d (0,220);
    glEnd();
    //road-1
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (0,238);
    glVertex2d (30,238);
    glVertex2d (30,243);
    glVertex2d (0,243);
    glEnd();
    //road-2
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (50,238);
    glVertex2d (70,238);
    glVertex2d (70,243);
    glVertex2d (50,243);
    glEnd();
    //road-3
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (90,238);
    glVertex2d (110,238);
    glVertex2d (110,243);
    glVertex2d (90,243);
    glEnd();
    //road-4
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (130,238);
    glVertex2d (150,238);
    glVertex2d (150,243);
    glVertex2d (130,243);
    glEnd();
    //road-5
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (170,238);
    glVertex2d (190,238);
    glVertex2d (190,243);
    glVertex2d (170,243);
    glEnd();
    //road-6
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (270,238);
    glVertex2d (290,238);
    glVertex2d (290,243);
    glVertex2d (270,243);
    glEnd();
    //road-7
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (310,238);
    glVertex2d (330,238);
    glVertex2d (330,243);
    glVertex2d (310,243);
    glEnd();
    //road-8
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (350,238);
    glVertex2d (370,238);
    glVertex2d (370,243);
    glVertex2d (350,243);
    glEnd();
    //road-9
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (390,238);
    glVertex2d (410,238);
    glVertex2d (410,243);
    glVertex2d (390,243);
    glEnd();
    //road-10
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (430,238);
    glVertex2d (450,238);
    glVertex2d (450,243);
    glVertex2d (430,243);
    glEnd();
    //road-11
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (470,238);
    glVertex2d (490,238);
    glVertex2d (490,243);
    glVertex2d (470,243);
    glEnd();
    //road-12
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (510,238);
    glVertex2d (530,238);
    glVertex2d (530,243);
    glVertex2d (510,243);
    glEnd();
    //road-13
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (550,238);
    glVertex2d (570,238);
    glVertex2d (570,243);
    glVertex2d (550,243);
    glEnd();
    //road-14
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (590,238);
    glVertex2d (610,238);
    glVertex2d (610,243);
    glVertex2d (590,243);
    glEnd();
    //road-15
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (630,238);
    glVertex2d (650,238);
    glVertex2d (650,243);
    glVertex2d (630,243);
    glEnd();


    //road-16
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (225,490);
    glVertex2d (225,470);
    glVertex2d (230,470);
    glVertex2d (230,490);
    glEnd();

    //road-17
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (225,450);
    glVertex2d (225,430);
    glVertex2d (230,430);
    glVertex2d (230,450);
    glEnd();
    //road-18
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (225,410);
    glVertex2d (225,390);
    glVertex2d (230,390);
    glVertex2d (230,410);
    glEnd();
    //road-19
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (225,370);
    glVertex2d (225,350);
    glVertex2d (230,350);
    glVertex2d (230,370);
    glEnd();
    //road-20
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (225,330);
    glVertex2d (225,310);
    glVertex2d (230,310);
    glVertex2d (230,330);
    glEnd();
    //road-21
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (225,290);
    glVertex2d (225,270);
    glVertex2d (230,270);
    glVertex2d (230,290);
    glEnd();
    //road-22
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (225,210);
    glVertex2d (225,190);
    glVertex2d (230,190);
    glVertex2d (230,210);
    glEnd();
    //road-23
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (225,170);
    glVertex2d (225,150);
    glVertex2d (230,150);
    glVertex2d (230,170);
    glEnd();
    //road-24
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (225,130);
    glVertex2d (225,110);
    glVertex2d (230,110);
    glVertex2d (230,130);
    glEnd();
    //road-25
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (225,90);
    glVertex2d (225,70);
    glVertex2d (230,70);
    glVertex2d (230,90);
    glEnd();
    //road-26
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (225,50);
    glVertex2d (225,30);
    glVertex2d (230,30);
    glVertex2d (230,50);
    glEnd();


///////////////////////////////////////////////

//building-1
glColor3ub(205, 92, 92);
    glBegin(GL_POLYGON);
    glVertex2d(130, 355);
    glVertex2d(130, 450);
    glVertex2d(70, 450);
    glVertex2d(70, 355);
    glEnd();

//door-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(90, 355);
    glVertex2d(110, 355);
    glVertex2d(110, 410);
    glVertex2d(90, 410);
    glEnd();

    glColor3ub(105, 102, 92);
    glBegin(GL_POLYGON);
    glVertex2d(75, 450);
    glVertex2d(135, 450);
    glVertex2d(125, 460);
    glVertex2d(75, 460);
    glEnd();
//building-2
glColor3ub(46, 64, 83);
    glBegin(GL_POLYGON);
    glVertex2d(130, 355);
    glVertex2d(130, 510);
    glVertex2d(170, 510);
    glVertex2d(170, 355);
    glEnd();



//window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(140, 480);
    glVertex2d(160, 480);
    glVertex2d(160, 500);
    glVertex2d(140, 500);
    glEnd();

//window-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(140, 440);
    glVertex2d(160, 440);
    glVertex2d(160, 460);
    glVertex2d(140, 460);
    glEnd();

//window-3
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(140, 400);
    glVertex2d(160, 400);
    glVertex2d(160, 420);
    glVertex2d(140, 420);
    glEnd();

//window-4
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(140, 360);
    glVertex2d(160, 360);
    glVertex2d(160, 380);
    glVertex2d(140, 380);
    glEnd();

glColor3ub(93, 109, 126);
    glBegin(GL_POLYGON);
    glVertex2d(130, 510);
    glVertex2d(170, 510);
    glVertex2d(175, 520);
    glVertex2d(135, 520);
    glEnd();
glColor3ub(93, 109, 126);
    glBegin(GL_POLYGON);
    glVertex2d(170, 520);
    glVertex2d(175, 520);
    glVertex2d(175, 360);
    glVertex2d(170, 355);
    glEnd();
//building-3
glColor3ub(0, 139, 139);
    glBegin(GL_POLYGON);
    glVertex2d(70, 355);
    glVertex2d(70, 510);
    glVertex2d(30, 510);
    glVertex2d(30, 355);
    glEnd();


//window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(40, 480);
    glVertex2d(60, 480);
    glVertex2d(60, 500);
    glVertex2d(40, 500);
    glEnd();

//window-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(40, 440);
    glVertex2d(60, 440);
    glVertex2d(60, 460);
    glVertex2d(40, 460);
    glEnd();

//window-3
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(40, 400);
    glVertex2d(60, 400);
    glVertex2d(60, 420);
    glVertex2d(40, 420);
    glEnd();

//window-4
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(40, 360);
    glVertex2d(60, 360);
    glVertex2d(60, 380);
    glVertex2d(40, 380);
    glEnd();


glColor3ub(32, 178, 170);
    glBegin(GL_POLYGON);
    glVertex2d(30, 510);
    glVertex2d(70, 510);
    glVertex2d(75, 520);
    glVertex2d(35, 520);
    glEnd();
glColor3ub(32, 178, 170);
    glBegin(GL_POLYGON);
    glVertex2d(70, 520);
    glVertex2d(75, 520);
    glVertex2d(75, 460);
    glVertex2d(70, 450);
    glEnd();
//road-sub-2
    glColor3ub (121, 125, 127);
    glBegin(GL_POLYGON);
    glVertex2d (80,355);
    glVertex2d (120,355);
    glVertex2d (120,260);
    glVertex2d (80,260);
    glEnd();









//building-4
glColor3ub(64, 224, 208);
    glBegin(GL_POLYGON);
    glVertex2d(130, 90);
    glVertex2d(130, 185);// difference 95(y), 60(x)
    glVertex2d(70, 185);
    glVertex2d(70, 90);
    glEnd();

    //door-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(90, 90);
    glVertex2d(110, 90);
    glVertex2d(110, 145);
    glVertex2d(90, 145);
    glEnd();

    glColor3ub(255, 127, 80);
    glBegin(GL_POLYGON);
    glVertex2d(70, 450);
    glVertex2d(130, 450);
    glVertex2d(135, 460);
    glVertex2d(75, 460);
    glEnd();
    glColor3ub(87, 236, 240);
    glBegin(GL_POLYGON);
    glVertex2d(70, 185);
    glVertex2d(130, 185);
    glVertex2d(135, 195);
    glVertex2d(75, 195);
    glEnd();



    //building-5
glColor3ub(255, 127, 80);
    glBegin(GL_POLYGON);
    glVertex2d(130, 90);
    glVertex2d(130, 245);// 155(y)
    glVertex2d(170, 245);
    glVertex2d(170, 90);
    glEnd();

//window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(140, 215);
    glVertex2d(160, 215);
    glVertex2d(160, 235);
    glVertex2d(140, 235);
    glEnd();

//window-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(140, 175);
    glVertex2d(160, 175);
    glVertex2d(160, 195);
    glVertex2d(140, 195);
    glEnd();

//window-3
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(140, 135);
    glVertex2d(160, 135);
    glVertex2d(160, 155);
    glVertex2d(140, 155);
    glEnd();


//window-4
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(140, 95);
    glVertex2d(160, 95);
    glVertex2d(160, 115);
    glVertex2d(140, 115);
    glEnd();
glColor3ub(250, 128, 114);
    glBegin(GL_POLYGON);
    glVertex2d(130, 245);
    glVertex2d(170, 245);
    glVertex2d(175, 255);
    glVertex2d(135, 255);
    glEnd();
glColor3ub(250, 128, 114);
    glBegin(GL_POLYGON);
    glVertex2d(170, 255);
    glVertex2d(175, 255);
    glVertex2d(175, 95);
    glVertex2d(170, 90);
    glEnd();
//building-6
glColor3ub(222, 49, 99);
    glBegin(GL_POLYGON);
    glVertex2d(70, 90);
    glVertex2d(70, 245);
    glVertex2d(30, 245);
    glVertex2d(30, 90);
    glEnd();

//window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(40, 215);
    glVertex2d(60, 215);
    glVertex2d(60, 235);
    glVertex2d(40, 235);
    glEnd();

//window-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(40, 175);
    glVertex2d(60, 175);
    glVertex2d(60, 195);
    glVertex2d(40, 195);
    glEnd();

//window-3
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(40, 135);
    glVertex2d(60, 135);
    glVertex2d(60, 155);
    glVertex2d(40, 155);
    glEnd();


//window-3
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(40, 95);
    glVertex2d(60, 95);
    glVertex2d(60, 115);
    glVertex2d(40, 115);
    glEnd();

glColor3ub(228, 79, 112);
    glBegin(GL_POLYGON);
    glVertex2d(30, 245);
    glVertex2d(70, 245);
    glVertex2d(75, 255);
    glVertex2d(35, 255);
    glEnd();
glColor3ub(228, 79, 112);
    glBegin(GL_POLYGON);
    glVertex2d(70, 255);
    glVertex2d(75, 255);
    glVertex2d(75, 196);
    glVertex2d(70, 185);
    glEnd();

//road-sub-3
    glColor3ub (121, 125, 127);
    glBegin(GL_POLYGON);
    glVertex2d (80,90);
    glVertex2d (120,90);
    glVertex2d (120,0);
    glVertex2d (80,0);
    glEnd();

//road-sub-4
    glColor3ub (121, 125, 127);
    glBegin(GL_POLYGON);
    glVertex2d (120,0);
    glVertex2d (210,0);
    glVertex2d (210,45);
    glVertex2d (120,45);
    glEnd();



//building-7
glColor3ub(128, 128, 0);
    glBegin(GL_POLYGON);
    glVertex2d(450, 140);
    glVertex2d(500, 140);
    glVertex2d(500, 230);
    glVertex2d(450, 230);
    glEnd();
//window 1
glColor3ub(251, 252, 252);
    glBegin(GL_POLYGON);
    glVertex2d(460, 200);
    glVertex2d(490, 200);
    glVertex2d(490, 220);
    glVertex2d(460, 220);
    glEnd();

glColor3ub(160, 64, 0);
    glBegin(GL_POLYGON);
    glVertex2d(440, 230);
    glVertex2d(475, 260);
    glVertex2d(510, 230);

    glEnd();
//floor-1
glColor3ub(85, 107, 47);
    glBegin(GL_POLYGON);
    glVertex2d(500, 140);
    glVertex2d(505, 145);
    glVertex2d(505, 230);
    glVertex2d(500, 230);
    glEnd();

glColor3ub(177, 167, 255);
    glBegin(GL_POLYGON);
    glVertex2d(500, 140);
    glVertex2d(550, 140);
    glVertex2d(550, 190);
    glVertex2d(500, 190);
    glEnd();

//window for house
glColor3ub(251, 252, 252);
    glBegin(GL_POLYGON);
    glVertex2d(512, 140);
    glVertex2d(538, 140);
    glVertex2d(538, 175);
    glVertex2d(512, 175);
    glEnd();
//floor-2
glColor3ub(180, 128, 255);
    glBegin(GL_POLYGON);
    glVertex2d(500, 190);
    glVertex2d(505, 195);
    glVertex2d(555, 195);
    glVertex2d(550, 190);
    glEnd();
  //floor-3
glColor3ub(180, 128, 255);
    glBegin(GL_POLYGON);
    glVertex2d(550, 140);
    glVertex2d(555, 145);
    glVertex2d(555, 195);
    glVertex2d(550, 190);
    glEnd();

//building-8
glColor3ub(121, 167, 196);
    glBegin(GL_POLYGON);
    glVertex2d(300, 140);
    glVertex2d(350, 140); //50
    glVertex2d(350, 230);
    glVertex2d(300, 230);
    glEnd();

//window 1
glColor3ub(251, 252, 252);
    glBegin(GL_POLYGON);
    glVertex2d(310, 200);
    glVertex2d(340, 200);
    glVertex2d(340, 220);
    glVertex2d(310, 220);
    glEnd();

glColor3ub(160, 64, 0);
    glBegin(GL_POLYGON);
    glVertex2d(290, 230);
    glVertex2d(325, 260);
    glVertex2d(360, 230);

    glEnd();
//floor-1
glColor3ub(110, 153, 202);
    glBegin(GL_POLYGON);
    glVertex2d(350, 140);
    glVertex2d(355, 145);
    glVertex2d(355, 230);
    glVertex2d(350, 230);
    glEnd();

glColor3ub(255, 89, 89);
    glBegin(GL_POLYGON);
    glVertex2d(350, 140);
    glVertex2d(400, 140);
    glVertex2d(400, 190);
    glVertex2d(350, 190);
    glEnd();

//window for house
glColor3ub(251, 252, 252);
    glBegin(GL_POLYGON);
    glVertex2d(362, 140);
    glVertex2d(388, 140);
    glVertex2d(388, 175);
    glVertex2d(362, 175);
    glEnd();
//floor-2
glColor3ub(251, 113, 87);
    glBegin(GL_POLYGON);
    glVertex2d(350, 190);
    glVertex2d(355, 195);
    glVertex2d(405, 195);
    glVertex2d(400, 190);
    glEnd();
  //floor-3
glColor3ub(251, 113, 87);
    glBegin(GL_POLYGON);
    glVertex2d(400, 140);
    glVertex2d(405, 145);
    glVertex2d(405, 195);
    glVertex2d(400, 190);
    glEnd();

//car-2
    glColor3ub (211, 84, 0);
    glBegin(GL_POLYGON);
    glVertex2d (450,100);
    glVertex2d (520,100);
    glVertex2d (520,115);
    glVertex2d (450,115);
    glEnd();
//window side
    glColor3ub (211, 84, 0);
    glBegin(GL_POLYGON);
    glVertex2d (460,115);
    glVertex2d (510,115);
    glVertex2d (500,135);
    glVertex2d (470,135);
    glEnd();
//window 1
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (470,117);
    glVertex2d (480,117);
    glVertex2d (480,130);
    glVertex2d (470,130);
    glEnd();
//window 2
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (490,117);
    glVertex2d (500,117);
    glVertex2d (500,130);
    glVertex2d (490,130);
    glEnd();

    glColor3f(23, 32, 42);
    circle_kon(462, 98,8,8);
    glEnd();

    glColor3f(253, 254, 254);
    circle_kon(462,98,3,3);
    glEnd();

    glColor3f(23, 32, 42);
    circle_kon(504, 98,8,8);
    glEnd();

    glColor3f(253, 254, 254);
    circle_kon(504, 98,3,3);
    glEnd();


//car-3
    glColor3ub (23, 32, 42);
    glBegin(GL_POLYGON);
    glVertex2d (350,100);
    glVertex2d (420,100);
    glVertex2d (420,115);
    glVertex2d (350,115);
    glEnd();
//window side
    glColor3ub (23, 32, 42);
    glBegin(GL_POLYGON);
    glVertex2d (360,115);
    glVertex2d (410,115);
    glVertex2d (400,135);
    glVertex2d (370,135);
    glEnd();
//window 1
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (370,117);
    glVertex2d (380,117);
    glVertex2d (380,130);
    glVertex2d (370,130);
    glEnd();
//window 2
    glColor3ub (253, 254, 254);
    glBegin(GL_POLYGON);
    glVertex2d (390,117);
    glVertex2d (400,117);
    glVertex2d (400,130);
    glVertex2d (390,130);
    glEnd();

    glColor3f(23, 32, 42);
    circle_kon(362, 98,8,8);
    glEnd();

    glColor3f(253, 254, 254);
    circle_kon(362,98,3,3);
    glEnd();

    glColor3f(23, 32, 42);
    circle_kon(404, 98,8,8);
    glEnd();

    glColor3f(253, 254, 254);
    circle_kon(404, 98,3,3);
    glEnd();

//road-sub-5
    glColor3ub (121, 125, 127);
    glBegin(GL_POLYGON);
    glVertex2d (250,0);
    glVertex2d (492,0);
    glVertex2d (516,40);
    glVertex2d (250,40);
    glEnd();


//building-9
glColor3ub(223, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2d(280, 520);
    glVertex2d(320, 520); //50 ,90
    glVertex2d(320, 410);
    glVertex2d(280, 410);
    glEnd();


//window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(290, 490);
    glVertex2d(310, 490);
    glVertex2d(310, 510);
    glVertex2d(290, 510);
    glEnd();

//window-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(290, 455);
    glVertex2d(310, 455);
    glVertex2d(310, 475);
    glVertex2d(290, 475);
    glEnd();

//window-3
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(290, 420);
    glVertex2d(310, 420);
    glVertex2d(310, 440);
    glVertex2d(290, 440);
    glEnd();

    glColor3ub(223, 255, 80);
    glBegin(GL_POLYGON);
    glVertex2d(320, 500);
    glVertex2d(330, 500); //50 ,90
    glVertex2d(320, 520);
    glEnd();
//building-10
glColor3ub(180, 128, 255);
    glBegin(GL_POLYGON);

    glVertex2d(320, 410); //50 ,90
    glVertex2d(370, 410);
    glVertex2d(370, 500);
    glVertex2d(320, 500);
    glEnd();

//window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(335, 465);
    glVertex2d(355, 465);
    glVertex2d(355, 490);
    glVertex2d(335, 490);
    glEnd();

//window-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(335, 425);
    glVertex2d(355, 425);
    glVertex2d(355, 450);
    glVertex2d(335, 450);
    glEnd();

    glColor3ub(140, 91, 159);
    glBegin(GL_POLYGON);
    glVertex2d(370, 490);
    glVertex2d(380, 490); //50 ,90
    glVertex2d(370, 500);
    glEnd();
//building-11
glColor3ub(255, 191, 0);
    glBegin(GL_POLYGON);

    glVertex2d(370, 410); //50 ,90
    glVertex2d(420, 410);
    glVertex2d(420, 490);
    glVertex2d(370, 490);
    glEnd();


//window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(380, 460);
    glVertex2d(410, 460);
    glVertex2d(410, 480);
    glVertex2d(380, 480);
    glEnd();

//window-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(380, 420);
    glVertex2d(410, 420);
    glVertex2d(410, 440);
    glVertex2d(380, 440);
    glEnd();
glColor3ub(147, 81, 22);
    glBegin(GL_POLYGON);

    glVertex2d(420, 410); //50 ,90
    glVertex2d(430, 420);
    glVertex2d(430, 480);
    glVertex2d(420, 490);
    glEnd();


//building-12
glColor3ub(105, 102, 92);
    glBegin(GL_POLYGON);
    glVertex2d(480, 520);
    glVertex2d(520, 520); //50 ,90
    glVertex2d(520, 410);
    glVertex2d(480, 410);
    glEnd();

//window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(490, 490);
    glVertex2d(510, 490);
    glVertex2d(510, 510);
    glVertex2d(490, 510);
    glEnd();


//window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(490, 455);
    glVertex2d(510, 455);
    glVertex2d(510, 475);
    glVertex2d(490, 475);
    glEnd();

//window-3
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(490, 420);
    glVertex2d(510, 420);
    glVertex2d(510, 440);
    glVertex2d(490, 440);
    glEnd();

    glColor3ub(90, 76, 66);
    glBegin(GL_POLYGON);
    glVertex2d(520, 500);
    glVertex2d(530, 500); //50 ,90
    glVertex2d(520, 520);
    glEnd();
//building-13
glColor3ub(0, 170, 170);
    glBegin(GL_POLYGON);

    glVertex2d(520, 410); //50 ,90
    glVertex2d(570, 410);
    glVertex2d(570, 500);
    glVertex2d(520, 500);
    glEnd();
//window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(535, 465);
    glVertex2d(555, 465);
    glVertex2d(555, 490);
    glVertex2d(535, 490);
    glEnd();

//window-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(535, 425);
    glVertex2d(555, 425);
    glVertex2d(555, 450);
    glVertex2d(535, 450);
    glEnd();

    glColor3ub(0, 143, 156);
    glBegin(GL_POLYGON);
    glVertex2d(570, 490);
    glVertex2d(580, 490); //50 ,90
    glVertex2d(570, 500);
    glEnd();
//building-14
glColor3ub(12, 16, 6);
    glBegin(GL_POLYGON);

    glVertex2d(570, 410); //50 ,90
    glVertex2d(620, 410);
    glVertex2d(620, 490);
    glVertex2d(570, 490);
    glEnd();
//window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(580, 460);
    glVertex2d(610, 460);
    glVertex2d(610, 480);
    glVertex2d(580, 480);
    glEnd();

//window-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(580, 420);
    glVertex2d(610, 420);
    glVertex2d(610, 440);
    glVertex2d(580, 440);
    glEnd();

glColor3ub(12, 16, 6);
    glBegin(GL_POLYGON);

    glVertex2d(620, 410); //50 ,90
    glVertex2d(630, 420);
    glVertex2d(630, 480);
    glVertex2d(620, 490);
    glEnd();


//building-15
glColor3ub(121, 167, 196);
    glBegin(GL_POLYGON);
    glVertex2d(680, 520);
    glVertex2d(720, 520); //50 ,90
    glVertex2d(720, 410);
    glVertex2d(680, 410);
    glEnd();

//window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(690, 490);
    glVertex2d(710, 490);
    glVertex2d(710, 510);
    glVertex2d(690, 510);
    glEnd();


//window-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(690, 455);
    glVertex2d(710, 455);
    glVertex2d(710, 475);
    glVertex2d(690, 475);
    glEnd();

//window-3
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(690, 420);
    glVertex2d(710, 420);
    glVertex2d(710, 440);
    glVertex2d(690, 440);
    glEnd();

    glColor3ub(121, 167, 196);
    glBegin(GL_POLYGON);
    glVertex2d(720, 500);
    glVertex2d(730, 500); //50 ,90
    glVertex2d(720, 520);
    glEnd();
//building-16
glColor3ub(148, 190, 129);
    glBegin(GL_POLYGON);

    glVertex2d(720, 410); //50 ,90
    glVertex2d(770, 410);
    glVertex2d(770, 500);
    glVertex2d(720, 500);
    glEnd();
    //window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(735, 465);
    glVertex2d(755, 465);
    glVertex2d(755, 490);
    glVertex2d(735, 490);
    glEnd();

//window-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(735, 425);
    glVertex2d(755, 425);
    glVertex2d(755, 450);
    glVertex2d(735, 450);
    glEnd();

    glColor3ub(168, 189, 153);
    glBegin(GL_POLYGON);
    glVertex2d(770, 490);
    glVertex2d(780, 490); //50 ,90
    glVertex2d(770, 500);
    glEnd();
//building-17
glColor3ub(205, 98, 152);
    glBegin(GL_POLYGON);

    glVertex2d(770, 410); //50 ,90
    glVertex2d(820, 410);
    glVertex2d(820, 490);
    glVertex2d(770, 490);
    glEnd();
    //window-1
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(780, 460);
    glVertex2d(810, 460);
    glVertex2d(810, 480);
    glVertex2d(780, 480);
    glEnd();

//window-2
glColor3ub(244, 246, 247);
    glBegin(GL_POLYGON);
    glVertex2d(780, 420);
    glVertex2d(810, 420);
    glVertex2d(810, 440);
    glVertex2d(780, 440);
    glEnd();

    glColor3ub(167, 94, 155);
    glBegin(GL_POLYGON);

    glVertex2d(820, 410); //50 ,90
    glVertex2d(830, 430);
    glVertex2d(830, 480);
    glVertex2d(820, 490);
    glEnd();


//building-18
glColor3ub(88, 214, 141);
    glBegin(GL_POLYGON);
    glVertex2d(450, 290);
    glVertex2d(500, 290);
    glVertex2d(500, 380);
    glVertex2d(450, 380);
    glEnd();
//window 1
glColor3ub(251, 252, 252);
    glBegin(GL_POLYGON);
    glVertex2d(460, 350);
    glVertex2d(490, 350);
    glVertex2d(490, 370);
    glVertex2d(460, 370);
    glEnd();

glColor3ub(160, 64, 0);
    glBegin(GL_POLYGON);
    glVertex2d(440, 380);
    glVertex2d(475, 410);
    glVertex2d(510, 380);

    glEnd();
//floor-1
glColor3ub(29, 131, 72);
    glBegin(GL_POLYGON);
    glVertex2d(500, 290);
    glVertex2d(505, 295);
    glVertex2d(505, 380);
    glVertex2d(500, 380);
    glEnd();

glColor3ub(255, 170, 0);
    glBegin(GL_POLYGON);
    glVertex2d(500, 290);
    glVertex2d(550, 290);
    glVertex2d(550, 340);
    glVertex2d(500, 340);
    glEnd();

//window for house
glColor3ub(251, 252, 252);
    glBegin(GL_POLYGON);
    glVertex2d(512, 290);
    glVertex2d(538, 290);
    glVertex2d(538, 325);
    glVertex2d(512, 325);
    glEnd();
//floor-2
glColor3ub(243, 156, 18);
    glBegin(GL_POLYGON);
    glVertex2d(500, 340);
    glVertex2d(505, 345);
    glVertex2d(555, 345);
    glVertex2d(550, 340);
    glEnd();
  //floor-3
glColor3ub(243, 156, 18);
    glBegin(GL_POLYGON);
    glVertex2d(550, 290);
    glVertex2d(555, 295);
    glVertex2d(555, 345);
    glVertex2d(550, 340);
    glEnd();



//building-19
glColor3ub(199, 210, 60);
    glBegin(GL_POLYGON);
    glVertex2d(300, 290);
    glVertex2d(350, 290); //50
    glVertex2d(350, 380);
    glVertex2d(300, 380);
    glEnd();

//window 1
glColor3ub(251, 252, 252);
    glBegin(GL_POLYGON);
    glVertex2d(310, 350);
    glVertex2d(340, 350);
    glVertex2d(340, 370);
    glVertex2d(310, 370);
    glEnd();

glColor3ub(213, 115, 61);
    glBegin(GL_POLYGON);
    glVertex2d(290, 380);
    glVertex2d(325, 410);
    glVertex2d(360, 380);

    glEnd();
//floor-1
glColor3ub(164, 189, 71);
    glBegin(GL_POLYGON);
    glVertex2d(350, 290);
    glVertex2d(355, 295);
    glVertex2d(355, 380);
    glVertex2d(350, 380);
    glEnd();

glColor3ub(32, 58, 86);
    glBegin(GL_POLYGON);
    glVertex2d(350, 290);
    glVertex2d(400, 290);
    glVertex2d(400, 340);
    glVertex2d(350, 340);
    glEnd();

//window for house
glColor3ub(251, 252, 252);
    glBegin(GL_POLYGON);
    glVertex2d(362, 290);
    glVertex2d(388, 290);
    glVertex2d(388, 325);
    glVertex2d(362, 325);
    glEnd();
//floor-2
glColor3ub(52, 73, 94);
    glBegin(GL_POLYGON);
    glVertex2d(350, 340);
    glVertex2d(355, 345);
    glVertex2d(405, 345);
    glVertex2d(400, 340);
    glEnd();
  //floor-3
glColor3ub(52, 73, 94);
    glBegin(GL_POLYGON);
    glVertex2d(400, 290);
    glVertex2d(405, 295);
    glVertex2d(405, 345);
    glVertex2d(400, 340);
    glEnd();





    if(x<=1100)
    {
        x++;
    }
    else
        x=0;



    if(r>=-1200)
    {
        r--;
    }
    else
       r=700;






    glFlush();
}

void update(int val)
{
    glutTimerFunc(25,update, 0);
    glutPostRedisplay();
    //glutTimerFunc(1000, changeColor, 0);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1200,900);
    glutCreateWindow("Final Project");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(25,update,0);
    glutMainLoop();
}

