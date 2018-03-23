#include <stdio.h>
#include<conio.h>
void main()
{
	int a,b,flag,count=0;
	clrscr();
	printf("\n enter the 2 numbers");
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		flag=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			count++;
		}
	}
	printf("%d",count);
getch();
}
