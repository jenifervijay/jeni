#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(void)
{
    char a[10];
    int n,t;
clrscr();
    printf("Enter the string:");
    scanf("%s",a);
    n=strlen(a);
    t=n/2;
    a[t]='*';
    printf("%s",a);
    getch();
}
