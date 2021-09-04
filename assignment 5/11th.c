main()
{
    int a = -1, b = 1, c, no;
    printf("enter a number : ");
    scanf("%d", &no);
    c=a+b;
    while (c<no)
    {
        c = a + b;
        a = b;
        b = c;
        if(no==c)       
          break;
    }
    if(c>no)
      printf("number is a not term of fibonacci series");
    else
      printf("number is a term of fibonacci series");
    getch();
}