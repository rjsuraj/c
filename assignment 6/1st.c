main()
{
    int i,no;
    printf("enter a natural number : ");
    scanf("%d",&no);
    for(i=2;i<no;i++)
      if(no%i==0)
          break;
    if(i==no)
      printf("prime number");
    else 
      printf("non-prime number");
}