#include<stdio.h>
#include<conio.h>
int sumeven(int);
int sumeven(int n)
{
    if(n==1)
       return 2*n;
    return sumeven(n-1)+2*n;
}
main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d",&n);
    printf("%d",sumeven(n));
    getch();
}