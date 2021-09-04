main()
{
    int n1,n2,i,no;
    printf("enter two numbwr :\n");
    scanf("%d%d",&n1,&n2);
    for(i=1;1;i++)
    {
        if((n1*i)%n2==0)
        {
        printf("lcm is %d",n1*i);
        break;
        }
    }
    getch();
}