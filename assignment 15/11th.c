#include<string.h>
int comparison(char s1[],char s2[])
{
    int i,L1,L2;
    L1=strlen(s1);
    L2=strlen(s2);
    if(L1==L2)
    {
        for(i=0;s1[i];i++)
          if(s1[i]!=s2[i])
             break;
        if(s1[i]==0)
          return 1;
        else 
          return 0;
    }
    else 
      return 0;
}
main()
{
    char s1[20],s2[20];
    printf("enter a string : ");
    gets(s1);
    printf("enter another string : ");
    gets(s2);
    if(comparison(s1,s2)==1)
      printf("strings are same");
    else 
      printf("strings are not same");
}