#include<stdio.h>
#include<conio.h>
void Nnatural(int);
main()
{
    int n;
    printf("enter a natural number : ");
    scanf("%d",&n);
    Nnatural(n);  
    getch();
}
void Nnatural(int n)
{
    int i;
    for(i=1;i<=n;i++)
       printf("%d ",i);
}