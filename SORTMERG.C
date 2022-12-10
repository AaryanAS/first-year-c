#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[20],i,j,k,l;
clrscr();
printf("input the first 10 digits of array 1");
for(i=0;i<=9;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<=9;i++);
{
if(a[i]>a[i+1])
{
a[i+1]=a[i];
}
}
printf("\n input the first 10 digits of array 2");
for(i=0;i<=9;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<=9;i++);
{
if(b[i]>b[i+1])
{
b[i+1]=b[i];
}
}
for(i=0;i<=19;i++)
{
if(i<=9)
{
c[i]=a[i];
}
else
{c[i]=b[i-10];
}
}
for(i=0;i<=9;i++);
{
if(c[i]>c[i+1])
{
c[i+1]=c[i];
}
}

printf("merged array is");
for(i=0;i<=19;i++)
{
printf("\n %d",c[i]);
}
getch();
}