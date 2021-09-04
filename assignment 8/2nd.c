main()
{
    int menu,a,b;
    float x,y;
    while(1)
    {
    printf("\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.exit\n");
    printf("enter your choice : ");
    scanf("%d",&menu);
      switch(menu)
     {
        case 1:
            printf("enter two number :\n");
            scanf("%d%d",&a,&b);
            printf("sum is %d",a+b);
            getch();
            break;
        
        case 2:
            printf("enter two number :\n");
            scanf("%d%d",&a,&b);
            printf("substraction is %d",a-b);
            getch();
            break;
        
        case 3:
            printf("enter two number :\n");
            scanf("%d%d",&a,&b);
            printf("multiplication is %d\n",a*b);
            getch();
            break;
            
        case 4:
            printf("enter two number :\n");
            scanf("%f%f",&x,&y);
            printf("division is %.2f", x/y);
            getch();
            break;
            
        case 5:
            exit(0);
        default:
            printf("invalid choice");  
            getch();         
      }
    }
}
