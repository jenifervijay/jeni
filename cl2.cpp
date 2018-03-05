#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int i;
char s[20];
cout<<"\n enter the string:";
cin>>s;
cout<<"even strings are:";
for( i=1;s[i]!='\0';i++)
{
if(i%2==0)
{
cout<<"\n"<<s[i];
}
}
cout<<"\n odd strings are:";
for( i=1;s[i]!='\0';i++)
{
if(i%2!=0)
{
cout<<"\n"<<s[i];
}
}
getch();
}


