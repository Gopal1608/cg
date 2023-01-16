#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int x1,y1,x2,y2,dx,dy,length,i,ch;
float x,y,xinc,yinc;
int gd=DETECT,gm;
//clrscr();
//gd=DETECT;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 printf("Enter the starting coordinates");
scanf("%d%d",&x1,&y1);
printf("Enter the ending coordinates");
scanf("%d%d",&x2,&y2);
 
   //converting the screen co-ordinates to more user friendly co-ordinates
   // with respect to the centre of the screen.
   x1 = 320 + x1;
   x2 = 320 + x2;

   y1 = 240 - y1;
   y2 = 240 - y2;
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
length=abs(dx);
else
length=abs(dy);
xinc=dx/(float)length;
yinc=dy/(float)length;
x=x1;
y=y1;
 po:

     printf("\nChoose from options below...");
     printf("\n1 = Thin line");
     printf("\n2 = Dotted Line");
     printf("\n3 = Dashed Line");
     printf("\n>>Enter you choice: ");
     scanf("%d", &ch);

     switch(ch)
     {
           case 1:
           //clrscr();
           setcolor(RED);

           //drawing the co-ordinate axes
           line(0,240,640,240);
           line(320,0,320,480);
           for(i=0;i<length;i++)
           {
                putpixel(x,y,3);
				x=x+xinc;
				y=y+yinc;
				delay(10);
                //printf("%d\t(%f,%f)\t%f\t%f",i,s1,s2,x,y);
           }
           break;
           case 2:
           	//clrscr();
            setcolor(RED);

           //drawing the co-ordinate axes
            line(0,240,640,240);
            line(320,0,320,480);
		   
           for(i=0;i<length;i++)
           {
                if(i%2==0)
                {
                putpixel(x,y,4);
                }
                x=x+xinc;
				y=y+yinc;
				delay(10);
                //printf("%d\t(%f,%f)\t%f\t%f",i,s1,s2,x,y);
           }
           break;
           case 3:
           	//clrscr();
           	setcolor(RED);
           //drawing the co-ordinate axes
             line(0,240,640,240);
             line(320,0,320,480);
           
           for(i=0;i<length;i++)
           {
                if(i%4!=0)
                {
                putpixel(x,y,4);
                }
                x=x+xinc;
				y=y+yinc;
				delay(10);
                //printf("%d\t(%f,%f)\t%f\t%f",i,s1,s2,x,y);
           }
           break;
           default:
           printf("Enter a proper value from 1 to 3.");
           goto po;
     }
getch();
//closegraph();
}
