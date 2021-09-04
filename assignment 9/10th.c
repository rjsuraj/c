#include <conio.h>
#include <stdio.h>
int combination(int, int);
int factorial(int);
main()
{
    int n, r, s;
    printf("enter value of n and r for permutation :\n");
    scanf("%d%d", &n, &r);
    s = combination(n, r);
    printf("combination is %d", s);
    getch();
}
int combination(int n, int r)
{
    int s;
    s = factorial(n) /(factorial(r)*factorial(n - r));
    return s;
}
int factorial(int no)
{
    int i, s = 1;
    for (i = 1; i <= no; i++)
        s = s * i;
    return s;
}