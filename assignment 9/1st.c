#include<stdio.h>
#include<conio.h>
float arcircle(int);
main()
{
   int r;
   float s;
   printf("enter radius of circle : ");
   scanf("%d",&r);
   s=arcircle(r);
   printf("area of circle is %.2f",s);
   getch();
}
float arcircle(int r)
{
        float s;
        s=3.14*r*r;
        return s;
}