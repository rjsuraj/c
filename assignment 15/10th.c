int pattern(char s1[],char s2[])
{
   int i,j;
   for(i=0;s1[i];i++)
   {
       if(s2[0]==s1[i])
       {
           for(j=1;s2[j];j++)
             if(s2[j]!=s1[i+j])
                break;
           if(s2[j]==0)
              break;
       }
   }
   if(s1[i]==0)
     return 0;
   else 
     return 1;
}
main()
{
    char s1[20],s2[20];
    printf("enter a string : ");
    gets(s1);
    printf("enter another string to find :");
    gets(s2);
    if(pattern(s1,s2)==1)
       printf("given pattern present in a string");
    else
       printf("given pattern not present in a string");
    getch();
}