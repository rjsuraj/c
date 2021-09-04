#include <stdio.h>
#include <conio.h>
void standarddeviation(int[], int);
float squareroot(float);
void standarddeviation(int a[], int n)
{
    int i;
    float mean1, mean2, s = 0, c;
    for (i = 0; i < n; i++)
        s = s + a[i];
    mean1 = s / n;
    s = 0;
    for (i = 0; i < n; i++)
    {
        c = (a[i] - mean1) * (a[i] - mean1);
        if (c < 0)
            s = s - c;
        else
            s = s + c;
    }
    mean2 = s / n;
    printf("standard deviation is %.2f", squareroot(mean2));
}
main()
{
    int n, i;
    printf("enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    standarddeviation(a, n);
    getch();
}
float squareroot(float no)
{
    int i;
    for(i=0;i<=no;i++)
    {
        if(no/(i*i)==1.0)
           break;
    }
    return i;
}
