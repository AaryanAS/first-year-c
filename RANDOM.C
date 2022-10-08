#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int i,a[1];
clrscr();
printf("six random numbers generated from 1 to 6");
printf("\n \n %d",rand() % 7);
a[1]=rand() % 7;
printf("\n \n %d",rand() % 7);
printf("\n \n %d",rand() % 7);
getch();
}