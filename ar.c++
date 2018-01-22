#include<iostream.h>
#include<conio.h>
void main()
{
int ar[10],lar,i,size;
clrscr();
cout<<"enter the size of the element";
cin>>size;
cout<<"enter the element list:";
for(i=0;i<=size;i++)
cin>>ar[i];
lar=ar[0];
for(i=0;i<=size;i++)
{
if(lar<ar[i])
lar=ar[i];
}
cout<<"the maximum element is<<lar;
getch();
}
