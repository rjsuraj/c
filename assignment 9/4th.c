#include <stdio.h>
#include <conio.h>
void Neven(int);
main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d", &n);
    Neven(n);
    getch();
}
void Neven(int n)
{
    int i;
    for (i = 1; i <= n; i++)
        printf("%d ", 2*i);
}