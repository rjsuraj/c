main()
{
    int n, no;
    printf("enter a number : ");
    scanf("%d", &no);
    printf("reverse is ");
    while (no != 0)
    {
        n = no % 10;
        printf("%d",n);
        no = no / 10;
    }
    getch();
}