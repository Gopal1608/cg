#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{
            int gd,gm,i,j;

            /* Save character map of letter A */
           // You can make your changes in the below array
            int a[13][9] = {
                                    { 0, 0, 0, 0, 1, 0, 0, 0, 0},
                                    { 0, 0, 0, 1, 0, 1, 0, 0, 0},
                                    { 0, 0, 1, 0, 0, 0, 1, 0, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 1, 1, 1, 1, 1, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                                    { 0, 1, 0, 0, 0, 0, 0, 1, 0},
                              };

            /* Initialise graphics mode */
            detectgraph(&gd,&gm);
            initgraph(&gd,&gm,"c:\\turboc3\\bgi");
           
            for(i=0;i<13;i++)
            {
                        for(j=0;j<9;j++)
                        {
                                    putpixel(200+j,200+i,15*a[i][j]);
                        }
            }
            getch();
            closegraph();
}




/*
Expeiment 6 -
Title: c program for character generation
Description: Program to draw 'CG' using Bit Map Method (Frame Buffer)
*/
#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j;
int a[20][20]=

{{0,0,0,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,0,0},
{0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0},
{0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,0},
{1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0},
{0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0},
{0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0},
{0,0,0,1,1,1,0,0,0,0,0,0,0,1,1,1,1,0,0,0}};

initgraph(&gd,&gm,"");
for(i=0;i<19;i++)

{
for(j=0;j<19;j++)
{
if(a[i][j]==1)
putpixel(200+j,200+i,WHITE);
}
}
getch();
}