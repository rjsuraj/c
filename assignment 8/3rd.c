main()
{
  while(1)
  {
      int choice,a,b,c;
      printf("\n\n1.check whether given set of three numbers are length of isosceles or not\n");
      printf("2.check whether the given set of three numbers are length of right angled tringle or not\n");
      printf("3.check wether given set of three numbers are length of equilateral triangle or not\n");
      printf("4.exit\n");
      printf("enter your choie :\n");
      scanf("%d",&choice);

      switch(choice)
      {
          case 1:
               printf("enter three sides of triangle :\n");
               scanf("%d%d%d",&a,&b,&c);
               if(a==b || b==c || a==c)
                    printf("isosceles triangle") ;
                else 
                    printf("not an isosceles triangle");
                getch();
                break;

          case 2:
               printf("enter three sides of triangle :\n");
               scanf("%d%d%d",&a,&b,&c);
               if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
                    printf("right angled triangle") ;
               else 
                    printf("not an right angled triangle");
                    getch();
                    break;

          case 3:
               printf("enter three sides of triangle :\n");
               scanf("%d%d%d",&a,&b,&c);
               if(a==b&&a==c)
                    printf("eqilateral triangle") ;
               else 
                    printf("not an equilateral triangle");
                getch();
                break;

          case 4:
               exit(0);
          default:
               printf("invalid choice");
               getch();
      }
  }

}