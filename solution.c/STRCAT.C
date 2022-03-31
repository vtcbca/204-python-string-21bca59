/* demostration ofpass array into udf
wap to enter 5 element and print it udf print */

#include<stdio.h>
#include<conio.h>
void print();
int a[5];
void main
{
   int i;
   clrscr();
   for(i=0;i<5;i++)
   {
	  printf("\n Enter value a[%d]:",i);
	  scanf("%d",&a[i]);
   }
   print();
	       getch();
}
void print()
{
  int i;
  for(i=0;i<5;i++)
  {
	  print("%d",a[i]);
  }
}




