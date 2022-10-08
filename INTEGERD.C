#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[10];
clrscr();
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
{
printf("\n %d",a[i]);
}
getch();
}