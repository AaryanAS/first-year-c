#include<conio.h>
#include<stdio.h>
int fact(int);
void main()
{
int i,j;
clrscr();
printf("enter an integer");
scanf("%d",i);
j=fact(i);
printf("%d",j);
getch();
}
int fact(i)

{
if (i==1)
{
return 1;
}
else
{
return i* fact(i-1);
}
}

