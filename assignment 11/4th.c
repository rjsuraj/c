#include<stdio.h>
#include<conio.h>
main()
{
    int a[10],i;
    printf("enter 10 element :\n");
    for(i=0;i<=9;i++)
       scanf("%d",&a[i]);
    for (i=1;i<=9;i++)
       if(a[0]<a[i])
          a[0]=a[i];
    printf("greatest element is %d",a[0]);
    getch();
} 