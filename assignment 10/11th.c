#include<stdio.h>
#include<conio.h>
int sumdigits(int);
int sumdigits(int n)
{
    if(n==0)
      return n;
    return sumdigits(n/10)+n%10;
}
main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("%d",sumdigits(n));
    getch();
}