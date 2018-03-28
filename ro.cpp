#include <iostream.h>
 #include<conio.h>
void main()
{
int a[100],k,n,temp,i,j;
clrscr();
cout<<"\nEnter the n value : ";
cin>>n;
cout<<"\nEnter the number of rotations : ";
cin>>k;
cout<<"\nEnter the array elements : ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(j=0;j<k;j++)
{
temp=a[n-1];
for(i=n-2;i>=0;i--)
{
a[i+1]=a[i];
}
a[0]=temp;
}
cout<<"\nThe rotated array is ";
for(i=0;i<n;i++)
{
cout<<a[i];
}
getch();
}
