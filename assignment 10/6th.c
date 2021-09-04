#include <stdio.h>
#include <conio.h>
int reverseodd(int);
int reverseodd(int n)
{
    if (n == 0)
        return;
    printf("%d ", 2 * n-1);
    reverseodd(n - 1);
}
main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d", &n);
    reverseodd(n);
    getch();
}