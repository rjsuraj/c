#include<stdio.h>
#include<conio.h>
int reverseno(int);
int reverseno(int n)
{
    if(n==0)
       return;
    printf("%d ",n);
    reverseno(n-1);
}
main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d",&n);
    reverseno(n);
    getch();
}