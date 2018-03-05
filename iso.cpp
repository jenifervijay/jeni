#include<conio.h>
#include<string.h>
void main()
{
char s[10];
int i,l;
clrscr();
cout<<"\n enter the string ";
cin>>s;
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]==s[i+1])
{
temp=1;
}
}
if(temp==1)
{
cout<<"\n isogram";
}
else
{
cout<<"\n not a isogram";
}
getch();
}
