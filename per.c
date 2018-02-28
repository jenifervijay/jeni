#include <stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,c;
  printf("enter the 2 numbers:");
	scanf("%d%d",&n1,&n2);
	c=n1*n2;
	if(c/n1==n1)
	printf("%d is the perfect square \n",c);
	else
	printf("%d is not the perfect square\n",c);
  getch();
}
