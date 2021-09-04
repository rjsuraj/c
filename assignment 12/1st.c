#include<stdio.h>
#include<conio.h>
void rotate(int [],int);
void rotate(int a[],int n)
{
    int c[n],i;
    for(i=0;i<n;i++)
      c[i]=a[i];
    a[0]=c[n-1];
    for(i=1;i<n;i++)
       a[i]=c[i-1];
    for(i=0;i<n;i++)
       printf("%d ",a[i]);
    getch();
}
main()
{
    int n,i;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("after rotation\n");
    rotate(a,n);
    getch();
}
