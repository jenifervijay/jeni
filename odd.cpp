#include<iostream.h>
#include<conio.h>
void main()
{
int n,rem;
clrscr();
cout<<"\n enter the number";
cin>>n;
cout<<"odd numbers are:";
while(n!=0)
{
rem=n%10;
if(rem%2==1)
{
cout<<"\t"<<rem;
}
n=n/10;
}
getch();
}
