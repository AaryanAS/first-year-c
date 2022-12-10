#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int x,y;
clrscr();
start:
printf("dice game\n");
if(y==0)
exit(0);
x=rand() %7;
switch(x)
{
case 1:printf("1\n");
	break;

case 2:printf("2\n");
	break;

case 3:printf("3\n");
	break;

case 4:printf("4\n");
	break;

case 5:printf("5\n");
	break;

case 6:printf("6\n");
	break;
default:printf("retry");
	break;
}
printf("enter 0 to exit\n");
scanf("%d",&y);
getch();
goto start;
}