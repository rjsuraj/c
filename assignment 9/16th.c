#include<conio.h>
#include<stdio.h>
void occurance(int,int);
main()
{
    int no,gno;
    printf("enter the number : ");
    scanf("%d",&no);
    printf("enter the number you want to remove from that number : ");
    scanf("%d",&gno);
    occurance(no,gno);
    getch();
}
void occurance(int no,int gno)
{
    int i,n,s=0,count=0,j=no,place=1;
    while(j!=0)
    {
        j=j/10;
        count++;
    }
    for(i=1;i<count;i++)
       place=place*10;
    while(no!=0)
    {
        n=no%10;
        s=s+place*n;
        no=no/10;
        place=place/10;
    }
    while(s!=0)
    {
        n=s%10;
        if(n!=gno)
           printf("%d",n);
        s=s/10;
    }
}