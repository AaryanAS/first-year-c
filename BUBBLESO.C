#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[10],t;
clrscr();
printf("enter 10 inputs");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
{
 for(j=0;j<=9;j++)
 {
  if(a[j]>a[j+1])
  {
   t=a[j];
   a[j]=a[j+1];
   a[j+1]=t;
  }
 }
}
printf("the sorted values are:");
for(i=0;i<=9;i++)
{
 printf( "\n%d",a[i]);
}
getch();
}