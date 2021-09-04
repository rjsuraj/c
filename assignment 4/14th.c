main()
{
    int i,n,s=0;
    printf("enter a natural number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s = s + i;
    printf("sum is %d",s);
    getch();
}