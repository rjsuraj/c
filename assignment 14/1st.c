main()
{
    int count=0,i;
    char c,s[20];
    printf("enter the string : ");
    gets(s);
    printf("enter a character : ");
    scanf(" %c",&c);
    for(i=0;s[i];i++)
       if(s[i]==c)
          count++;
    printf("occurance of %c is %d",c,count);
    getch();
}