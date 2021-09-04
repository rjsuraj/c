#include<stdio.h>
#include<conio.h>
void meandeviation(int [],int);
void meandeviation(int a[],int n)
{
    int i;
    float mean1,mean2,s=0,c;
    for(i=0;i<n;i++)
      s=s+a[i];
    mean1=s/n;
    s=0;
    for(i=0;i<n;i++)
    {
        c=a[i]-mean1;
        if(c<0)
          s=s-c;
        else 
          s=s+c;
    }
    mean2=s/n;
    printf("mean deviation is %.2f",mean2);
}
main()
{
    int n,i;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array:\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    meandeviation(a,n);
    getch();
}