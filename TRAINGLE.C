#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter angle 1:\n");
scanf("%d",&a);
printf("enter angle 2:\n");
scanf("%d",&b);
printf("enter angle 3:\n");
scanf("%d",&c);
if(a+b+c==180)
{
 if(a==b&&b!=c||b==c&&b!=a||c==a&&c!=b)
 {
  printf("it is an isoceles triangle");
 }
 else if(a==b&&b==c)
 {
  printf("it is an equilateral triangle");
 }
 else
 {
  printf("it is a scalene triangle");
 }
}
else
{printf("invalid input of angles");
}
getch();
}