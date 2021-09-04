#include<string.h>
int countwords(char s[])
{
    int i,count=0;
    for(i=0;s[i];i++)
       if(s[i]==' ')
         count++;
    return count+1;
}
main()
{
    char s[30];
    printf("enter the string : ");
    gets(s);
    printf("words : %d",countwords(s));
    getch();
}