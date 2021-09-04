#include<string.h>
char* capatialise(char*);
main()
{
    char s[20];
    printf("enter a string : ");
    gets(s);
    puts(capatialise(s));
    getch();
}
char* capatialise(char s[])
{
    char i,u='A';
    for(i='a';i<='z';i++)
    {
        if(s[0]==i)
          s[0]=u;
        u++;
    }
    return s;
}