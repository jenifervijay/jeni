#include <iostream.h>
#include<conio.h>
void main()
{
int a[10],n,i,j,count=0;
cout<<"enter the limit:";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]==a[j])
{
count=count+1;
}
}
if(count==1)
{
cout<<a[i];
}
}
getch();
}
