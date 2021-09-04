main()
{
    int i,j,u=65;
    char s[20];
    printf("enter the string : ");
    gets(s);
    for(i=97;i<=122;i++)
    {
      for(j=0;s[j];j++)
         if(s[j]==i)
             s[j]=u;
         u++;
    }
    puts(s);
    getch();
}