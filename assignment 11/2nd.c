#include <conio.h>
#include <stdio.h>
main()
{
    int a[10], s = 0, i;
    printf("enter 10 numbers :\n");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= 9; i++)
        s = s + a[i];
    printf("%d", s );
    getch();
}