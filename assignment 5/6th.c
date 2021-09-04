main()
{
    int n,no,s=0;
    printf("enter a number : ");
    scanf("%d",&no);
    while(no!=0){
        n=no%10;
        s=s+n;
        no=no/10;
    }
    printf("sum of digits is %d",s);
    getch();
}