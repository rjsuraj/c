#include<stdio.h>
#include<conio.h>
int prime(int);
main()
{
    int no;
    printf("enter a number : ");
    scanf("%d",&no);
    if(prime(no))
       printf("prime number");
    else 
       printf("non-prime number");
}
int prime(int no)
{
    int i;
    for(i=2;i<no;i++)
       if(no%i==0)
          break;
    if(i==no)   
        return 1;
    else 
        return 0;
}