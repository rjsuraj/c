main()
{
    int i, n, s;
    printf("Enter a natural number : ");
    scanf("%d", &n);
    for (i = 1; i <= 2 * n; i += 2)
        s = s + i;
    printf("sum is %d", s);
    getch();
}