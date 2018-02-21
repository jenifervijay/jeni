#include <stdio.h>
#include <string.h>
#include<conio.h>
void main()
{
    char str[20], re[20];
    int t;
clrscr();
    printf("Enter the string: ");
    gets(str);
  strcpy(re,str); 
    strrev(re);
    t= strcmp(str, re);
    if(t == 0)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is Not Palindrome");
    }

getch();
}
