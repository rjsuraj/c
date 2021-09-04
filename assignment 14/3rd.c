main()
{
    char s[30];
    int count;
    printf("enter a string : ");
    gets(s);
    for(count=0;s[count];count++);
    printf("length of string is %d",count);
    getch();
}