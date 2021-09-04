main()
{
    int s,e,h,m,st;
    float p;
    printf("enter marks of five subjects out of hundred : ");
    scanf("%d%d%d%d%d",&s,&e,&m,&st,&h);
    if(s<33||e<33||h<33||m<33||st<33)
      printf("fail");
    else
    {
        p=(s+e+h+st+m)/5;
        printf("pass\n");
        if(p<=60)
           printf("C grade");
        else if(p<=80)
           printf("B grade");
        else
           printf("A grade");
         
    }
    getch();
    
}