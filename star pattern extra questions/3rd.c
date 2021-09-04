// main()
// {
//     int i, j,k;
//     for (i = 1; i <= 4; i++)
//     {
//         k=i;
//         for (j = 1; j <= 7; j++)
//         {
//             if (j >= 5 - i && j <= 3 + i){
//                 printf("%d",k);
//                 (j<4)?k++:k--;
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// alternate method
main()
{
    int i, j, k,rows;
    printf("enter no's of rows : ");
    scanf("%d",&rows);
    for (i = 1; i <= rows; i++)
    {
        k = i;
        for (j = 1; j <= (rows*2-1); j++)
        {
            if (j >= rows+1 - i && j <= rows-1 + i)
            {
                printf("%d", k);
                (j < rows) ? k++ : k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}