#include <stdio.h>
#include<conio.h>
void main()
{
 int n, i;
clrscr();
 printf("Enter a positive integer: ");
 scanf("%d",&n);
 printf("Factors of %d are: ", n);
 for(i=1; i <= n; ++i)
  {
        if (n%i == 0)
        {
            printf("%d ",i);
        }
    }

    getch();
}
