#include <stdio.h>
#include <conio.h>
int sumodd(int);
int sumodd(int n)
{
    if (n == 1)
        return n;
    return sumodd(n - 1) + 2 * n-1;
}
main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d", &n);
    printf("%d", sumodd(n));
    getch();
}