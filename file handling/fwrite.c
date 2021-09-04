#include<stdio.h>
struct book 
{
    int bookid;
    char title[30];
    float price;
};
main()
{
    struct book b1;
    FILE *fp;
    fp=fopen("myfile.dat","wb");
    printf("enter bookid,title and price:\n ");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
    getch();
}