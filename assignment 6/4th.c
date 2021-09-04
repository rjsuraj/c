main()
{
    int no,n1,i;
    printf("enter a number : ");
    scanf("%d",&n1);
    for(no=++n1;1;no++)
    {
        for(i=2;i<no;i++)
          if(no%i==0)
            break;
        if(i==no)
          {
              printf("%d",no);
              break;
          }
    }
    getch();
}