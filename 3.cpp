#include<iostream.h>
#include<conio.h>
#include<string.h>
void sort(int[],int);
void main()
{
int n1,n2,e[10],f[10],i,count=0;
char a[10],b[10];
clrscr();
cout<<"Enter the first input string:";
cin>>a;
n1=strlen(a);
cout<<"Enter the second input string:";
cin>>b;
n2=strlen(b);
if(n1==n2)
{
for(i=0;i<n1;i++)
{
e[i]=a[i];
}
for(i=0;i<n2;i++)
{
f[i]=b[i];
}
sort(e,n1);
sort(f,n2);
for(i=0;i<n1;i++)
{
if(e[i]!=f[i])
{
count=1;
break;
}
}
if(count==1)
{
cout<<"The given string is not anagram";
}
else
{
cout<<"The given string is anagram";
}
}
else
{
cout<<"The given string is not anagram";
}
getch();
}
void sort(int a[],int n)
{
int i,j,t;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
getch();
}
