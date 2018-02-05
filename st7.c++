#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,temp;
cout<<"enter the a value:";
cin>>a;
cout<<"enter the b value:";
cin>>b;
temp=a;
a=b;
b=temp;
cout<<"after swapping "<<a<<b;
getch();
}
