main()
{
    int i, n;
    printf("enter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d ",n+1-i);
    getch();
}