#include <stdio.h>
#include <conio.h>
void rangearmstrong(int);
main()
{
    int no;
    printf("enter a number : ");
    scanf("%d", &no);
    rangearmstrong(no);
    getch();
}
void rangearmstrong(int range)
{
    int n, s,no,j;
    for(no=0;no<=range;no++)
    {
        j=no;
        s=0;
     while (j != 0)
     {
        n = j % 10;
        s = s + n * n * n;
        j = j / 10;
     }
    
    if (no == s)
        printf("%d ",s);
    }
}