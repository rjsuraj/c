#include <stdio.h>
#include <conio.h>
int sum(int);
main()
{
    int n, s;
    printf("enter a natural number : ");
    scanf("%d", &n);
    s = sum(n);
    printf("sum of first %d natural number is %d", n, s);
    getch();
}
int sum(int n)
{
    int i, s = 0;
    for (i = 1; i <= n; i++)
        s = s + i;
    return s;
}