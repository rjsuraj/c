#include<stdio.h>
main()
{
    int i;
    FILE *fp;
    fp=fopen("suraj.txt","w");
    if(fp==NULL)
      printf("file cannot open");
    char s[100];
    printf("enter any string : ");
    gets(s);
    for(i=0;i<=strlen(s);i++)
      fputc(s[i],fp);
    fclose(fp);
    getch();


}