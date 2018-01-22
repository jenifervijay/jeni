#include<stdio.h>
#include<conio.h>
void main()
 {
   int a[30], i, n, small;
 clrscr();
   printf("\nEnter no of elements :");
   scanf("%d", &n);
   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);
   small = a[0];
   for (i = 0; i < n; i++)
 {
      if (a[i] < small) 
{
         small = a[i];
      }
   }
  printf("\nSmall Element : %d", smallest);
getch();
}
