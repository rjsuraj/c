#include<string.h>
int palindrome(char s[])
{
    char c[20];
    int i;
    strcpy(c,s);
    strrev(s);
    for(i=0;s[i];i++)
      if(s[i]!=c[i])
         break;
    if(s[i]==0)
       return 1;
    else 
       return 0;
}
main()
{
    char s[20];
    int i;
    printf("enter the string : ");
    gets(s);
    i=palindrome(s);
    if(i==1)
      printf("palindrome string");
    else 
      printf("not palindrome string");
    getch();
}