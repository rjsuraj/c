#include<string.h>
int alphanumeric(char s[])
{
    int count=0,j;
    char i;
    for(i='a';i<='z';i++)
    {
       for(j=0;s[j];j++)
          if(s[j]==i)
          {
              count++;
              break;
          }
        if(count==1)
          break;
    }
    for(i='0';i<='9';i++)
    {
       for(j=0;s[j];j++)
          if(s[j]==i)
          {
              count++;
              break;
          }
        if(count==2)
          break;
    }
    return count;
}
main()
{
    char s[20];
    printf("enter the string : ");
    gets(s);
    if(alphanumeric(s)==2)
       printf("alphanumeric string");
    else 
       printf("not alphanumeric string");
    getch();
}