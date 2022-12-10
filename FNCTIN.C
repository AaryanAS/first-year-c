#include<conio.h>
#include<stdio.h>
//int a[10]={1,2,3,4,5,6,7,8,9,0};
void disp(void);
int x=10;
void main()
{
clrscr();
x=x+5;
printf("%d",x);

disp();

getch();
}
void disp (void)
{
int x=5;
//for(i=0;i<=9;i++)

printf("\n%d",x);

}