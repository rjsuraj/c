#include <stdio.h>
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
    fp = fopen("myfile.dat", "rb");
    while(fread(&b1, sizeof(b1), 1, fp))
       printf("%d %s %.2f\n",b1.bookid,b1.title,b1.price);
    fclose(fp);
    getch();
}