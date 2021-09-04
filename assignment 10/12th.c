#include<stdio.h>
#include<conio.h>
void binary(int);
void  binary(int n)
{
   if(n==0)
     return;
   binary(n/2);
   printf("%d",n%2);
}
main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    binary(n);
    getch();
}