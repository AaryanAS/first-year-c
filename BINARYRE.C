#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int i,j,t,a[20]={79,10,40,25,50,57,45,4,23,7,68,72,71,73,11,76,63,58,26,47};
int mid,low,high,num,total;
clrscr();
high=19;
for(i=0;i<=high;i++)
{for(j=0;j<=high;j++)
 {if(a[j]>a[j+1])
  {t=a[j];
   a[j]=a[j+1];
   a[j+1]=t;
  }
 }
}


printf("enter the wanted integer");
scanf("%d",&num);
low=0;
high=19;
do
{
total=high+low;
mid=total/2;
if (num==a[mid])
{printf("number found");
}
if(num>a[mid])
{low=mid;
}
if(num<a[mid])
{high=mid;
}
break;
}
while(num!=a[mid]);
if (num!=a[mid])
printf("number not found");
getch();
}