#include<conio.h>
#include<stdio.h>
int hcf(int,int);
int hcf(int n1,int n2)
{
    if(n1%n2==0)
      return n2;
    else if(n2%n1==0)
      return n1;
    if(n1>n2)
      hcf(n1%n2,n2);
    else
      hcf(n1,n2%n1);
}
main()
{
    int n1,n2;
    printf("enter two number :\n");
    scanf("%d%d",&n1,&n2);
    printf("hcf is %d",hcf(n1,n2));
    getch();
}