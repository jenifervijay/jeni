#include <iostream.h>
#include<conio.h>
void main() 
{
int n,i,j,flag=1;
cout<<"\n enter the number:";
cin>>n;
for(j=2;j<=n;j++)
{
if(n%j==0)	
{
flag=1;
for(i=2;i<=j/2;i++)
{
if(j%i==0)
{
flag=0;
break;
			}
}
if(flag==1)
{
cout<<j;
}
}
}
getch();
}
