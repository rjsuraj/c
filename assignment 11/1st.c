#include<conio.h>
#include<stdio.h>
main()
{
    int a[10],s=0,i;
    for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
       s=s+a[i];
    printf("%.2f",s/10.0);
    getch();
}