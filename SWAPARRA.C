#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],t=0,i,j;
clrscr();
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0,j=9;i<=4;i++,j--)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
for(i=0;i<=9;i++)
{
printf("%d",a[i]);
}
getch();
}

