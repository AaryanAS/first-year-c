#include<conio.h>
#include<stdio.h>
//int a[10]={1,2,3,4,5,6,7,8,9,0};
void fun(int);
int x,y;
void main()
{
clrscr();

printf("enter any number");
scanf("%d",&x);

fun(x);

getch();
}
void fun (int y)
{
y=x%2;
if( y==0)

printf("even");

else
{
printf("odd");
}
//for(i=0;i<=9;i++)


}