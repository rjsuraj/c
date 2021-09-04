#include <stdio.h>
#include <conio.h>
int Nodd(int);
int Nodd(int n)
{
    if (n == 0)
        return;
    Nodd(n - 1);
    printf("%d ", 2 * n-1);
}
main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d", &n);
    Nodd(n);
    getch();
}