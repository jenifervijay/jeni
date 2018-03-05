#include<iostream.h>
#include<conio.h>
void main()
{
int n1,n2,i;
clrscr();
cout<<"\n enter the 2 numbers:";
cin>>n1>>n2;
for(i=1;i<=n1 && i<=n2;i++)
{
if(n1%i==0 && n2%i==0)
{
cout<<i;
}
}
getch();
}
