main()
{
    int i,n;
    printf("enter a number : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
        printf("%d ", 2 * i - 1);
    getch();
}