#include<stdio.h>
main()
{
  char s[10];
  FILE *fp;
  fp = fopen("suraj.txt", "r");
  if (fp == NULL)
    printf("file cannot found");

    while(fgets(s,8,fp))
       printf("%s",s);

    fclose(fp);
    getch();

}
