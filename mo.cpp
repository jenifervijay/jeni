#include<iostream.h>
#include<conio.h>
void main()
{
int n1,n2,n3,n4;
clrscr();
d:
cout<<"\n enter the two numbers for /:";
cin>>n1>>n2;
cout<<"\n enter the two numbers for %:";
cin>>n3>>n4;
n1=n1/n2;
n3=n3%n4;
cout<<"\ndivition of 2 number is:\t"<<n1;
cout<<"\nmod divition of 2 number is:\t"<<n3;
goto d;
getch();
}
