#include<iostream.h>
#include<conio.h>
void main()
{
int n,n1,n2,cnt;
clrscr();
cout<<"enter the number for check whether it is in between the two numbers:";
cin>>n;
cout<<"enter the 2 numbers";
cin>>n1>>n2;
for(int i=1;i<n2;i++)
{
if(n==(n1+1))
{
cnt=1;
}
else
{
cnt=0;
}
}
if(cnt==1)
{
cout<<"present inbetween the 2 numbers";
}
else
{
cout<<"the no is not present inbetween the 2 numbers";
}
getch();
}
