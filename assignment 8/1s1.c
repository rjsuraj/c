main()
{
    int no,day1,day2;
    printf("enter month number : ");
    scanf("%d",&no);
    day1=31;
    day2=30;
    switch(no)
    {
        case 1:
           printf("%d days",day1);
        break;
        case 2:
           printf("28 days");
        break;
        case 3:
           printf("%d days",day1);
        break;
        case 4:
           printf("%d days",day2);
        break;
        case 5:
           printf("%d days",day1);
        break;
        case 6:
           printf("%d days",day2);
        break;
        case 7:
           printf("%d days",day1);
        break;
        case 8:
           printf("%d days",day1);
        break;
        case 9:
           printf("%d days",day2);
        break;
        case 10:
           printf("%d days",day1);
        break;
        case 11:
           printf("%d days",day2);
        break;
        case 12:
           printf("%d days",day1);
        break;
        default:
           printf("invalid number");
        break;
          
    }
}