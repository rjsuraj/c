#include<stdio.h>
#include<conio.h>
int envenodd(int);
main()
{
    int no;
    printf("enter a number : ");
    scanf("%d",&no);
    if(evenodd(no))
       printf("even number");
    else 
       printf("odd number");
    getch();
}
int evenodd(int no)
{
    if(no%2)
        return 0;
    else
        return 1;
}