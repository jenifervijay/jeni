#include <iostream.h>
#include<conio.h>
void main()
{
int n,r,s=0;
clrscr();
cout<<"\n enter the number:";
cin>>n;
while(n>0)
{
r=n%10;
s=s+(r*r);
n=n/10;
}
cout<<"\n square of a number is:"<<s;
getch();
}
