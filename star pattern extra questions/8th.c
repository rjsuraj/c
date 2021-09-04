main()
{
    int i,j,k=0;
    for(i=1;i<=9;i++)
    {
        if(i<=5)
           (i<=3)?k++:k--;
        else
            (i<=7)?k++:k--;

        for(j=1;j<=5;j++)
        {
            if (j >= 6 - k && i <= 5 || j <= k && i >= 5)
                printf("*"); 
            else
                printf(" ");
        }
        printf("\n");
    }
}