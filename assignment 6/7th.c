// main()
// {
//     int i=2,j,n1,n2,s=1;
//     printf("enter two number :\n");
//     scanf("%d%d",&n1,&n2);
//     j=n1<n2?n1:n2;
//     while(i<=j)
//     {
//         for(i=2;i<=j;i++)
//         {
//             if(n1%i==0 && n2%i==0)
//             {
//                 n1=n1/i;
//                 n2=n2/i;
//                 s=s*i;
//                 break;
//             }
//         }
//     }
//     printf("%d", s);
// }
// // alternate method
main()
{
    int i,n1,n2,hcf;
    printf("enter two number :\n");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=(n1<n2?n1:n2);i++)
       if(n1%i==0 && n2%i==0)
           hcf=i;
    printf("hcf is %d",hcf); 
}
