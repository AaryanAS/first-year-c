#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int i,ch,x,y,z;
clrscr();
do{
printf("\n choice based menu program");
printf("\n press 1 for addition");
printf("\n press 2 for subtraction");
printf("\n press 3 for multiplication");
printf("\n press 4 for division");
printf("\n press 0 to exit");
scanf("%d",&ch);
switch(ch)
{
case 1:
       printf("\n enter first number \n");
       scanf("\n %d",&x);

       printf("\n enter second number \n");
       scanf("\n %d",&y);
       z=x+y;
       printf("%d",z);
       break;
case 2: printf("\n enter first number \n");
       scanf("\n %d",&x);

       printf("\n enter second number \n");
       scanf("\n %d",&y);
	z=x-y;
	printf("%d",z);
	break;
case 3: printf("\n enter first number \n");
       scanf("\n %d",&x);

       printf("\n enter second number \n");
       scanf("\n %d",&y);
	z=x*y;
	printf("%d",z);
	break;
case 4: printf("\n enter first number \n");
       scanf("\n %d",&x);

       printf("\n enter second number \n");
       scanf("\n %d",&y);
	z=x/y;
	printf("%d",z);
	break;
case 0: exit(0);
default:printf("default case");break;
}
}while(1);
}



