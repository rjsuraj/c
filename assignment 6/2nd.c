main()
{
    int no,i;
    for(no=2;no<=100;no++)
    {
        for(i=2;i<no;i++)
          if(no%i==0)
             break;
        if(i==no)
          printf("%d ",no);
    }
    getch();
}