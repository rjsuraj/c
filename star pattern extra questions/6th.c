main()
{
    int i, j, k = 0, l;
    for (i = 1; i <= 9; i++)
    {
        l=1;
        (i<=5)?k++:k--;
        for (j = 1; j <= 5; j++)
        {
            if (j >= 6-k)
            {
                printf("%d", l);
                l++;
            }
            else
                printf(" ");
        }
        printf("\n");
        
    }
}