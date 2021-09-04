main()
{
    int i,no;
    printf("enter a number :");
    scanf("%d",&no);
    while(no!=1)
    {
      for(i=2;no!=1;i++)
      {
        if(no%i==0)
        {
            no=no/i;
            printf("%d ",i);
            break;
        }
         
      }
    }
}