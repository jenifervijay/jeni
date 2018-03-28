#include <stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,j,count=0;
printf("enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
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
printf("%d",a[i]);
}
}
getch();
}
