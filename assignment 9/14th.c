#include<stdio.h>
#include<conio.h>
void armstrong(int);
main()
{
    int no;
    printf("enter a number : ");
    scanf("%d",&no);
    armstrong(no);
    getch();
}
void armstrong(int no)
{
    int n,i,s=0,j=no;
    while(no!=0)
    {
        n=no%10;
        s=s+n*n*n;
        no=no/10;
    }   
        if(j==s)
          printf("armstrong number");
        else
          printf("not an armstrong number");
    
}