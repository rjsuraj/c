#include<stdio.h>
#include<conio.h>
int nextprime(int);
main()
{
    int no;
    printf("enter a number : ");
    scanf("%d",&no);
    printf(" next prime is %d",nextprime(no));
    getch();
}
int nextprime(int no)
{
    int i;
    for(no+=1;1;no++)
    {
        for(i=2;i<no;i++)
           if(no%i==0)
              break;
        if(i==no)
           {
               return no;
               break;
           }
    }
}