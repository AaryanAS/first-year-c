#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
#define size 25
int i,constant=0,vowel=0;
char name[size];
clrscr();
printf("please enter a word");
scanf("%s",&name);
for(i=0;name[i]!='\0';i++)
{if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
 {vowel++;
 }
 else
 {constant++;
 }
}
printf("\ntotal number of vowels=%d",vowel);
printf("\ntotal number of constants=%d",constant);
getch();
}