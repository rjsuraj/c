main()
{
    int n1,n2,i,j;
    printf("enter two number : ");
    scanf("%d%d",&n1,&n2);
    j=n1<n2?n1:n2;
    for(i=2;i<=j;i++)
       if(n1%i==0 && n2%i==0)
          break;
    if(i==j+1)
       printf("co prime");
    else 
       printf("non-co prime");
    getch();

}