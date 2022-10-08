#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[10]={2,3,5,7,11,13,17,19,23,29};
clrscr();
printf("the first ten prime numbers are:");
for(i=0;i<=9;i++)
{
printf("\n%d",a[i]);
}
getch();
}