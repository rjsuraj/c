main()
{
    int i,j,k=6,l;
    for(i=1;i<=7;i++)
    {
        l=k;
        for(j=1;j<=7;j++)
        {
            if(j<=8-i)
            {
               printf("%d",l);
               l--;
            }
            else 
               printf(" ");
        }
        printf("\n"); 
        k--;
    }

}