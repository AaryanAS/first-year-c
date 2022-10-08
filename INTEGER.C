#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int a[10];
clrscr();
for(i=0;i<=9;i=i+1)
{
scanf("%d",&a[i]);
}
for(i=9;i>=0;i=i-1)
{
printf("\n %d",a[i]);
}

getch();
}
