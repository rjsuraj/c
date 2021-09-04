#include<stdio.h>
#include<conio.h>
main()
{
    int E[10],O[10],i,s=0;
    printf("enter 10 even numbers :\n");
    for(i=0;i<=9;i++)
       scanf("%d",&E[i]);
    
    for(i=0;i<=9;i++)
       s=s+E[i];
    printf("sum of 10 even number is %d",s);
    getch();

    printf("enter 10 odd numbers :\n");
    for (i = 0; i <= 9; i++)
        scanf("%d", &O[i]);

    s=0;
    for (i = 0; i <= 9; i++)
        s = s + O[i];
    printf("\nsum of 10 odd number is %d", s);
    getch();
}