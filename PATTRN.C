#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,j,k;
clrscr();
printf("enter number of rows");
scanf("%d",&a);

for(i=1;i<=a;i++)
{
	printf("\n");
     //	printf("\r");

       for(k=i;k<a;k++)
		{
		printf(" ");
		}

	for(j=1;j<=((2*i)-1);j++)
		{
		printf("*");
		}
}
getch();
}