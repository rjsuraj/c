#include<conio.h>
#include<stdio.h>
int permutation(int,int);
int factorial(int);
main()
{
   int n,r,s;
   printf("enter value of n and r for permutation :\n");
   scanf("%d%d",&n,&r);
   s=permutation(n,r);
   printf("permutation is %d",s);
   getch();
}
int permutation(int n,int r)
{
    int s;
    s=factorial(n)/factorial(n-r);
    return s;
}
int factorial(int no)
{
    int i,s=1;
    for(i=1;i<=no;i++)
       s=s*i;
    return s;
}