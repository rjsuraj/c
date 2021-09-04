main()
{
    int i,n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       printf("%d ",2*(n+1-i));
    getch();
}