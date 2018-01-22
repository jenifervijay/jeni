#include<iostream.h>
#include<coio.h>
void main()
{
int lar,size,i,ar[10];
cout<<"enter the size of array:";
cin>>size;
cout<<"enter the element list:";
for(i=0;i<=size;i++)
cin>>ar[i];
lar=ar[0];
for(i=1;i<size;i++)
{
if(lar<ar[i]);
lar=ar[i];
}
cout<<"the maximum element is:"<<lar;
getch();
}
