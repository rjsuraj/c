#include<conio.h>
#include<stdio.h>
int sum(int);
int sum(int n)
{
    if(n==1)
       return n;
    return sum(n-1)+n;
}
main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d",&n);
    printf("sum is %d",sum(n));
    getch();
}