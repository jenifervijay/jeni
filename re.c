#include<stdio.h>
#include<conio.h>
void main()
{
char st[50],ch;
int i,j,count=1,max=1;
printf("\n enter the string:");
scanf("%s",st);
for(i=0;st[i]!='\0';i++)
{
for(j=i+1;st[j]!='\0';j++)
if(st[i]==st[j])
{
count=count+1;
if(count>max)
{
max=count;
ch=st[i];
}
}
 
}
printf("%c",ch);
getch();
}
