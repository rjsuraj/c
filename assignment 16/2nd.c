#include<string.h>
main()
{
    int i,j,k;
    char s[8][20],c;
    printf("enter 8 cities name :\n");
    for(i=0;i<8;i++)
      gets(s[i]);
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<8;j++)
        {
            if(s[i][0]>s[j][0])
            {
               for (k=0;k<20; k++)
                 {
                    c = s[i][k];
                    s[i][k] = s[j][k];
                    s[j][k] = c;
                 }
            }
        }
    }
    printf("     \nafter sorting :\n\n");
    for(i=0;i<8;i++)
      puts(s[i]);
    getch();
}