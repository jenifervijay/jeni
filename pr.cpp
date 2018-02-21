#include<iostream.h>
#include<conio.h>
void main()
{
int n,temp=0,i;
clrscr();
cout<<"enter the number:";
cin>>n;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
temp=1;
break;
}
}
if(temp==0)
{
cout<<"prime number";
}
else
{
cout<<"not a prime number";
}
getch();
}
