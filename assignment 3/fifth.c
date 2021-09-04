main()
{
    int no;
    scanf("%d",&no);
    if(no%400==0 && no%10==0)
       printf("leap year");
    else if(no%4==0 && no%10)
       printf("leap year");
    else
        printf("non-leap year");
    getch();
}