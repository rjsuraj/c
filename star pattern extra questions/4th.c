// main()
// {
//     int i,j,k=0;
//     for(i=1;i<=7;i++)
//     {
//         (i<=4)?k++:k--;

//         for(j=1;j<=4;j++)
//            if(j<=k)
//              printf("*");
//            else 
//              printf(" ");
//         printf("\n"); 
//     }
// }
// alternate method
main()
{
    int i, j, k = 0,rows,n;
    printf("enter no of rows : ");
    scanf("%d",&rows);
    n=(rows+1)/2;
    for (i = 1; i <= rows; i++)
    {
        if(rows%2==0)
         {
             if(i<=n) k++;
             if(i>n+1) k--;
         }
        else
            (i<=n)?k++:k--;

        for (j = 1; j <= n; j++)
            if (j <= k)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}