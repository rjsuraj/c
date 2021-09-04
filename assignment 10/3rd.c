#include<stdio.h>
#include<conio.h>
int Neven(int);
int Neven(int n)
{
    if(n==0)
       return;
    Neven(n-1);
    printf("%d ",2*n);
}
main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d",&n);
    Neven(n);
    getch();
}