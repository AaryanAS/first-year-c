#include<stdio.h>
#include<conio.h>
void main()
{
int i,secmax=0,x[10],max=0;
clrscr();
for(i=0;i<=9;i++)
{
scanf("%d",&x[i]);
}

for(i=0;i<=9;i++)
 {
  if(x[i]>secmax)
  {
    if(x[i]>max)
    {
     secmax=max;
     max=x[i];
    }
    else
    {
    secmax=x[i];
    }
  }
  else
  {
  }
 }

printf("the highest value is %d",max);
printf("\nthe second highest value is %d",secmax);
getch();
}