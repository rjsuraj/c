#include <stdio.h>
#include <conio.h>
int sumsquare(int);
main()
{
    int n, s;
    printf("enter a natural number : ");
    scanf("%d", &n);
    s = sumsquare(n);
    printf("sum of square of first %d natural number is %d", n, s);
    getch();
}
int sumsquare(int n)
{
    int i, s = 0;
    for (i = 1; i <= n; i++)
        s = s + i*i;
    return s;
}