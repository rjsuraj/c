#include<stdio.h>
main()
{
    FILE *fp;
    fp=fopen("suraj.txt","r");
    if(fp==NULL)
      printf("file cannot found");
    char ch;
    while(!feof(fp)){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    // fclose(fp);
    getch();

}