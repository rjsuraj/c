void sort(int [],int);
void sort(int a[],int n)
{
    int i,j,c;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
          if(a[i]>a[j])
          {
              c=a[i];
              a[i]=a[j];
              a[j]=c;
          }
    }
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
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
    sort(a,n);
    getch();
}