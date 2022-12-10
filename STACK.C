#include<stdio.h>
#include<conio.h>
#include<process.h>
int st[10]={-1};
int top=-1;
int val;
void push(int);
void pop();
void disp();
void main()
{
int ch;
do{
clrscr();
printf("\n press 1 for push");
printf("\n press 2 for pop");
printf("\n press 3 for display");
printf("\n press 0 to exit");
scanf("%d",&ch);
switch(ch)
{
case 1:
	printf("\n please input the value \n");
	scanf("\n %d",&val);
	push(val);
	break;
case 2:
	pop();
	break;
case 3:
	disp();
	break;
case 0:
	exit(0);
default:
	printf("default case");
	break;
}
}
while(1);
}

void push(int value)
{
if(top==9)
{printf("overflow");

}
else
{
top=1+top;
st[top]=value;
}

}
void pop()
{
if (top==-1)
{printf("underflow");
}
else
{top--;
disp();}
}

void disp()
{
int i;
for(i=top;i>=0;i--)
{
printf("\n%d",st[i]);
}
getch();
}


