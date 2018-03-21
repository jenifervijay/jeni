#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[50],b[50];
  int i,s,f,c=0;
  scanf("%s %s",a,b);
  f=strlen(a);
  s=strlen(b);
  if(f==s)
  {
   for(i=0;a[i]!='\0';i++)
   {
  if(a[i]!=b[i])
    {
   c++;
     }
     }
    if(c==1)
    {
     printf("yes");
    }
    else
   }
  printf("no"); 
 }
 }
 else
  {
 printf("no");
 }
getch();
}
