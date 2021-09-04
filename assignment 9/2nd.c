#include <stdio.h>
#include <conio.h>
float circumference(int);
main()
{
    int r;
    float s;
    printf("enter radius of circle : ");
    scanf("%d", &r);
    s = circumference(r);
    printf("circumference of circle is %.2f", s);
    getch();
}
float circumference(int r)
{
    float s;
    s = 3.14 * 2 * r;
    return s;
}