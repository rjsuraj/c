void indexlowest(int a[],int n)
{
    int i,low=0;
    for(i=1;i<n;i++)
       if(a[0]>a[i])
       {
           a[0]=a[i];
           low=i;
       }
    printf("lowest element index is %d",low);
}
main()
{
    int i,n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array :\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    indexlowest(a,n);
    getch();
}
