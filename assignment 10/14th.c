#include <stdio.h>
#include <conio.h>
int reverse(int);
int reverse(int n)
{
    if (n == 0)
        return;
    printf("%d", n % 10);
    reverse(n / 10);
}
main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    reverse(n);
    getch();
}