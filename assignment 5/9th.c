main()
{
    int a=-1,b=1,c,count;
    printf("enter a number : ");
    scanf("%d",&count);
    while(count)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        count--;
    }
    getch();
}