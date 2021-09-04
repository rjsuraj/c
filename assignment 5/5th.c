 main()
 {
     int i,no;
     printf("enter a number : ");
     scanf("%d",&no);
     int count=0;
     while(no!=0)
    {
        no=no/10;
        count++;
    }
    printf("%d",count);
    getch();

 }