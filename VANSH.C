#include<stdio.h>
void main()
{
int i,j,k;
int a[3][3],b[3][3],c[3][3]={0};
printf("enter the value of a");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the values of b");
    for (i=0;i<=2;i++)
    {
	for(j=0;j<=2;j++)
	{
  scanf("%d",&b[i][j]);
   }
    }
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
for(k=0;k<=2;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("\t %d",c[i][j]);
}
printf("\n");
}




}
