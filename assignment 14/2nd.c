#include<string.h>
main()
{
    char s[20];
    int count;
    printf("Enter the string : ");
    gets(s);
    count=strlen(s);
    printf("length of string is %d",count);
    getch();
}