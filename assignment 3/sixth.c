main()
{
    int a,b,c;
    printf("find roots of equation like ax^2+bx+c\nenter value of a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    int d;
    d=b*b-4*a*c;
    if(d==0)
      printf("equal roots");
    else if(d>0)
      printf("distinct roots");
    else
      printf("imaginary roots");
    getch();
    

}