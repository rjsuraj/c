#include <stdio.h>
#include <conio.h>
int reverseeven(int);
int reverseeven(int n)
{
    if (n == 0)
        return;
    printf("%d ",2*n);
    reverseeven(n - 1);
}
main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d", &n);
    reverseeven(n);
    getch();
}