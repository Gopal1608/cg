#include <conio.h>
#include<stdio.h>
#include <graphics.h>
void main(){
int gd=DETECT,gm;
int xl,yl,xh,yh,x1,y1,x2,y2;
int p[4],q[4],i,accept=1;                               // To decide if line has to be shown are not
float u[4],umin=0,umax=1;
int x3,y3,x4,y4;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(BLUE);

printf("Enter bottom left and top right co-ordinates of the window: ");
scanf("%d %d %d %d",&xl,&yl,&xh,&yh);
rectangle(xl,yl,xh,yh);
printf("Enter the line co-ordinates x1,y1,x2,y2\n");
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
line(x1,y1,x2,y2);
getch();


p[0] = -(x2-x1);
p[1] = (x2-x1);
p[2] = (y2-y1);                                                  //These two equations have to be inverted as in computer
p[3] = -(y2-y1);                                               //we have y increasing as we go below, opp. to that on paper
q[0] = x1-xl;
q[1] = xh-x1;
q[2] = yl-y1;                                                   //These two equations have to be inverted for same reason
q[3] = y1-yh;

for(i=0;i<4;i++){
if(p[i]!=0){
u[i] = (float)q[i]/p[i];
if(p[i]<0 && u[i]>umin)                          //Line is entering and therefore check for umin
umin = u[i];
else if(p[i]>0 && u[i]<umax)               //Line is exiting and therefore check for umax
umax = u[i];
}else if(p[i]==0 && q[i]<0)                 //Line is invisible as pk=0 & qk<0
accept=0;
}
printf("After clipping:" );
if(accept==1 && umax>umin){

x3 = x1 + (x2-x1)*umin;
y3 = y1 + (y2-y1)*umin;
x4 = x1 + (x2-x1)*umax;
y4 = y1 + (y2-y1)*umax;
setcolor(WHITE);
line(x3,y3,x4,y4);
}
getch();
closegraph();
}