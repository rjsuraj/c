int occurance(char s[],char c)
{
   int i,count=0;
   for(i=0;s[i];i++)
      if(s[i]==c)
        count++;
   return count;
}
main()
{
    char s[20]="my name is suraj",c='s';
    printf("character : %d",occurance(s,c));
    getch();
}