void distinct(int [],int);
void distinct(int a[],int n)
{
    int i,j,count;
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i-1;j>=0;j--)
          if(a[i]==a[j])
            count++;
        if(count==1)
          printf("%d ",a[i]);
    }
}
main()
{
    int n,i;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array :\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    distinct(a,n);
    getch();
}
