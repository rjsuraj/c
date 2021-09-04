main()
{
    char i,j,l='a',s[20];
    printf("enter a string : ");
    gets(s);
    for(i='A';i<='Z';i++)
    {
        for(j=0;s[j];j++)
          if(s[j]==i)
             s[j]=l;
        l++;
    }
    puts(s);
    getch();
}