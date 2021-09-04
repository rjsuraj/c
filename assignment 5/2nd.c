main()
{
    int i, n, s;
    printf("Enter a natural number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        s = s + i * i * i;
    printf("sum is %d", s);
    getch();
}