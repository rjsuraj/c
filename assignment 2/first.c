main()
{
    int a,b;
    printf("enter two number :\n");
    scanf("%d%d",&a,&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swapping %d %d",a,b);
    getch();
}