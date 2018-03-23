#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i,res,a[20],t=0;
char r[10];
clrscr();
printf("enter roman number:");
scanf("%s",r);
n=strlen(r);
for(i=0;i<n;i++)
{
if(r[i]=='I')
a[i]=1;
else if(r[i]=='V')
a[i]=5;
else if(r[i]=='X')
a[i]=10;
else if(r[i]=='L')
a[i]=50;
else if(r[i]=='C')
a[i]=100;
else if(r[i]=='D')
a[i]=500;
else
printf("\nINVALID");
}
for(i=0;i<n;i+=2)
{
if(a[i]<a[i+1])
	{
		res=a[i+1]-a[i];
	}
	else
	{
	res=a[i]+a[i+1];
	}
t=res+t;
}
printf("\n%d",t);
getch();
}
