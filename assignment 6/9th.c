main()
{
    int i,no;
    printf("enter a number : ");
    scanf("%d",&no);
    printf("factors are ");
    for(i=1;i<=no;i++)
      if(no%i==0)
          printf("%d ",i);  
    getch();
}