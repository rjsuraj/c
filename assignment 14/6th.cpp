#include<string.h>
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
   int n,i,c;
   char s[20];
   printf("enter a string : ");
   gets(s);
   n=strlen(s);
   for(i=0;i<n/2;i++)
     swap(s[i],s[n-1-i]);
   puts(s);
   getch();
}