#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    int len,len1,i,j,flag,u,v;
    clrscr();
    printf("\n enter the 1st string:");
    scanf("%s",a);
    printf("\n enter the 2nd string:");
    scanf("%s",b);
    len=strlen(a);
    len1=strlen(b);
    if(len==len1)
    {
	for(i=0;i<len;i++)
	{
	    for(j=i+1;j<len1;j++)
	    {
		u=a[i]-a[j];
		v=b[i]-b[j];
		if(u==v)
		{
		    flag=0;
		}
		else
		{
		    flag=1;
		    break;
		}
	    }
	}
    }
    else
	printf("not isomorphic\n");
    if(flag==0)
    {
	printf("yes\n");
    }
    else
	printf("not isomorphic\n");
    getch();
}
