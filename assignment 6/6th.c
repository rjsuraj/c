main()
{
    int no,i,n1,count=0;
    printf("enter a number : ");
    scanf("%d",&n1);
    for(no=2;n1!=count;no++)
     {
         for(i=2;i<no;i++)
           if(no%i==0)
             break;
        if(i==no)
        {
          printf("%d ",no);
          count++;
        }
        
     }
     getch();

}