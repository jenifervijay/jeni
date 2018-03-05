#include<iostream.h>
#include<conio.h>
class fram
{
public:
float l,b,c;
public:
void cal()
{
cout<<"\n enter length  and breadth values:";
cin>>l>>b;
c=l*b;
cout<<"\n area of fram is: "<<c;
}
};
void main()
{
clrscr();
fram f;
f.cal();
getch();
}
