// main()
// {
//     int i, j,k=3;
//     for (i = 1; i <= 7; i++)
//     {
//         for (j = 1; j <= 7; j++)
//         {
//             if(i<=4)
//             {
//                if (j >= 5 - i && j <= 3 + i)
//                     printf("*");
//                else
//                     printf(" ");
//             }
//             else
//             {
//                 if (j >=5-k && j <= 3+ k)
//                     printf("*");
//                 else
//                     printf(" ");
//             }   
//         }
//         printf("\n");
//         if(i>4)  k--;
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
        if(rows%2==0) {
             if(i<=n) k++;
             if(i>n+1) k--;
        }
        else
              i<=n?k++:k--;

        for (j = 1; j <= rows; j++)
                if (j >= n+1 - k && j <= n-1 + k)
                    printf("*");
                else
                    printf(" ");

        printf("\n");
    }
}
