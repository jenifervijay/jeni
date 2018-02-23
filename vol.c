#include<stdio.h>
#include<conio.h>
void main()
{
char s[20];
int i,cnt;
clrscr();
printf("\n enter the string ");
scanf("%s",s);
for(i=0;s[i]!=0;i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
{
cnt=1;
}
else
{
cnt=0;
}
}
if(cnt==1)
{
printf("\n string contain vowel");
}
else
{
printf("\n string is not contain vowel");
}
getch();
}

