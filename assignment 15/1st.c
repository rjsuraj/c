#include<string.h>
main()
{
    char s1[]="apple",s2[]="appl";
    int i;
    i=comparestr(s1,s2);
    if(i==0)
       printf("strings are same");
    else
    { 
      if(i<0)
       printf("strings are not same but in dictionary order");
      else 
       printf("strings are not same and  not in dictionary order");
    }
    getch();
}
int comparestr(char s1[],char s2[])
{
    int i, L1, L2;
    L1 = strlen(s1);
    L2 = strlen(s2);
    strlwr(s1);
    strlwr(s2);
    if (L1==L2)
    {
        for (i = 0; s1[i]; i++)
            if (s1[i] != s2[i])
                break;
        if (s1[i] == 0)
            return 0;
        else
        {
            if (s1[0] <= s2[0])
                return -1;
            else
                return 1;
        }
    }
    else
      {
          if(s1[0]<=s2[0])
            return -1;
          else 
            return 1;
      }
}