main()
{
    char s[8][20];
    int i,j,count=0;
    printf("enter 8 strings :\n");
    for(i=0;i<8;i++)
      gets(s[i]);
    for(i=0;i<8;i++)
    {
        for(j=0;s[i][j];j++)
        {
            if(s[i][j]=='a')
               count++;
            else if(s[i][j]=='e')
               count++;
            else if(s[i][j]=='i')
               count++;
            else if(s[i][j]=='o')
               count++;
            else if(s[i][j]=='u')
               count++;
        }
    }
    printf("total vowels : %d",count);
    getch();
}