main()
{
    int p,r,t;
    printf("enter principle amount,rate of interest and time :\n");
    scanf("%d%d%d",&p,&r,&t);
    printf("simple interest = %.2f",(p*r*t)/100.0);
    getch();
}