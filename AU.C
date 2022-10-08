#include<stdio.h>
#include<conio.h>
void main()
{
int i,f=1,r=0;
clrscr();
scanf("%d",&r);
for(i=1;i<=r ;i=i+1)
{
f=f*i;
printf( "\n%d",f);
getch();
}
getch();
}

