#include<stdio.h>
#include<conio.h>
int fib(int);
int fib(int nth)
{
    if(nth==1)
      return 0;
    if(nth==2)
      return 1;
    return fib(nth-2)+fib(nth-1);
}
main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("%d",fib(n));
    getch();
}