main()
{
    int i, j;
    char ch;
    for (i = 1; i <= 4; i++)
    { 
        ch='A';
        for (j = 1; j <= 7; j++)
        {
            if (j <=5- i || j >= 3+ i)
                printf("%c",ch);
            else
                printf(" ");
           (j<4)?ch++:ch--;
        }
        printf("\n");
    }
    getch();
}