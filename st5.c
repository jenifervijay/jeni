#include<stdio.h>
#include<conio.h>
void main()
{
char st[50];
int temp,count=0;
printf("\n enter the string:");
gets(st);
for(temp=0;st[temp]!=0;temp++)
{
if(st[temp]>='0' && st[temp]<='9')
{
count++;
}
printf("\n number of numeric characters are:%d",count)
getch();
}
