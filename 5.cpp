#include<iostream.h>
#include<conio.h>
 #include<string.h>
void main()
{
char a[10];
int i,n;
cout<<"enter the string:";
cin>>a;
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]=='X')
{
a[i]='A';
}
else if(a[i]=='Y')
{
a[i]='B';
}
else if(a[i]=='Z')
{
a[i]='C';
}
else
{
a[i]=a[i]+3;
}
}
cout<<a;
getch();
}
