#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
scanf("%d",&x);
scanf("%d",&y);
x=x+y;
y=x-y;
x=x-y;
printf("\nx=%d",x);
printf("\ny=%d",y);
getch();
}