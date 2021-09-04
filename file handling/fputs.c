#include<stdio.h>
main()
{
    FILE *fp;
    fp=fopen("suraj.txt","w");
    char s[100];
    printf("eneter any string :\n");
    gets(s);
    fputs(s,fp);
    fclose(fp);
    getch();
}