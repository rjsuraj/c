#include<string.h>
int countvowels(char*);
main()
{
   char s[20];
   printf("enter a string : ");
   gets(s);
   printf("vowels : %d",countvowels(s));
   getch();
}
int countvowels(char s[])
{
   int i,count=0;
   strlwr(s);
   for(i=0;s[i];i++)
   {
       if(s[i]=='a')
         count++;
       else if(s[i]=='e')
         count++;
       else if(s[i]=='i')
         count++;
       else if(s[i]=='o')
         count++;
       else if(s[i]=='u')
         count++;
    }
    return count;
} 