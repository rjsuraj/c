#include<conio.h>
#include<stdio.h>
int factorial(int);
main()
{
    int no,s;
    printf("enter a number : ");
    scanf("%d",&no);
    s=factorial(no);
    printf("factorial is %d",s);
    getch();
}
int factorial(int no)
{
    int i,s=1;
    for(i=1;i<=no;i++)
       s=s*i;
    return s;

}