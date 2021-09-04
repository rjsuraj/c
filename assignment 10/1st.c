#include<stdio.h>
#include<conio.h>
int print(int);
int print(int n)
{
   if(n==0)
       return;
   print(n-1);
   printf("%d ",n);
}
main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d",&n);
    print(n);
    getch();
}