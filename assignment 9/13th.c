#include<conio.h>
#include<stdio.h>
void btprime(int,int);
main()
{
    int n1,n2;
    printf("enter two number :\n");
    scanf("%d%d",&n1,&n2);
    btprime(n1,n2);
    getch();
}
void btprime(int n1,int n2)
{
    int i,j;
    for(i=++n1;i<n2;i++)
    {
        for(j=2;j<i;j++)
           if(i%j==0)
              break;
        if(j==i)
          printf("%d ",i);
    }
}