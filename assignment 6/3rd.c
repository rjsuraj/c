main()
{
    int no,i,n1,n2;
    printf("enter two number and get all the prime number between these number :\n");
    scanf("%d%d",&n1,&n2);
    for(no=++n1;no<=n2;no++)
    {
        for(i=2;i<no;i++)
          if(no%i==0)
             break;
        if(i==no)
          printf("%d ",no);
    }
    getch();
}