#include<conio.h>
#include<stdio.h>
int sumsquare(int);
int sumsquare(int n)
{
   if(n==1)
      return n;
   return sumsquare(n-1)+n*n;
}
main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d",&n);
    printf("%d",sumsquare(n));
    getch();

}