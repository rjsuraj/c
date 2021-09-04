void frequency(int[], int);
void frequency(int a[], int n)
{
  int i, j, k, count;
  for (i = 0; i < n; i++)
  {
    count = 1;
    for (j = i - 1; j >= 0; j--)
      if (a[i] == a[j]) 
        count++;
    if (count == 1)
    {
      for (k = i + 1; k < n; k++)
        if (a[i] == a[k])
          count++;
      printf("%d==>%d\n", a[i], count);
    }
  }
}
main()
{
  int n, i;
  printf("enter the size of array : ");
  scanf("%d", &n);
  int a[n];
  printf("enter the elements of array :\n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  frequency(a, n);
  getch();
}
