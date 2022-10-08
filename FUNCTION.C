#include<stdio.h>
#include<conio.h>
int evenodd(int);
void main()
{
clrscr();
int x,y;
printf("enter the value of x");
scanf("%d",&x);
y=evenodd(x);
printf("value of y is %d",y);
if (y==0)
{
printf("Even");
}
else
{
printf("\n Odd");
}
getch();
}

int evenodd(int)
{
int x;
printf("Enter value of x");
scanf("%d",&x);
return x%2;
}
