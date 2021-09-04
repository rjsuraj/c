main()
{
    int a = -1, b = 1, c, count;
    printf("enter a number : ");
    scanf("%d", &count);
    while (count)
    {
        c = a + b;
        a = b;
        b = c;
        count--;
    }
    printf("%d ", c);
    getch();
}