#include<stdio.h>
#include<conio.h>
void reversearray(int [],int);
void reversearray(int a[],int n)
{
    int i,c;
    for(i=0;i<n/2;i++)
    {
       c=a[i];
       a[i]=a[n-1-i];
       a[n-1-i]=c;
    }
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
}
main()
{
    int n,i;
    printf("enter size of array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    reversearray(a,n);
    getch(); 