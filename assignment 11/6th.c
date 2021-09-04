#include<stdio.h>
#include<conio.h>
main()
{
    int a[10],i,j,c;
    for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
    for(i=0;i<=8;i++)
    {
        for(j=i+1;j<=9;j++)
           if(a[i]<a[j])
           {
               c=a[j];
               a[j]=a[i];
               a[i]=c;
           }
    }
    printf("after sorting\n");
    for(i=0;i<=9;i++)
      printf("%d ",a[i]);
}