main()
{
    int i, j,k;
    for (i = 1; i <= 4; i++)
    {
        k=1;
        for (j = 1; j <= 7; j++)
        {
            if (j <= i)
            {
                printf("%d",k);
                k++;
            }
            else
                printf(" ");
            
        }
        printf("\n");
    }
    getch();
}