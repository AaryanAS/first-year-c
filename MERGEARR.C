#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[20],i;
clrscr();
printf("input the first 10 digits of array 1");
for(i=0;i<=9;i++)
{scanf("%d",&a[i]);
}
printf("\n input the first 10 digits of array 2");
for(i=0;i<=9;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<=19;i++)
{
c[i]=a[i]+b[i];
}
printf("merged array is");
for(i=0;i<=19;i++)
{
printf("\n %d",c[i]);
}
getch();
}