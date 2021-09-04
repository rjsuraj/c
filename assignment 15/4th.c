#include<string.h>
char* revrseword(char []);
main()
{
    char s[20];
    printf("enter the string : ");
    gets(s);
    puts(revrseword(s));
    getch();
}
char* revrseword(char s[])
{
    int i,j,count=-1,c;
    strrev(s);
    while(1)
    { 
        i=count+1;
        for(count=i;s[count]!=' ';count++)
           if(count>strlen(s)-1)
              break;

        for(j=i;j<(count+i)/2;j++)
        {
            c=s[j];
            s[j]=s[count-j+i-1];
            s[count-j+i-1]=c;
        }
        
        if (count == strlen(s))
            break;
    }
    return s;
}