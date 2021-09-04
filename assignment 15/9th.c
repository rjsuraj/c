int occurance(char s[], char c)
{
    int i;
    for (i = 0; s[i]; i++)
        if (s[i] == c)
            break;
    return i;
}
main()
{
    char s[20] = "name is suraj", c = 's';
    printf("index : %d", occurance(s, c));
    getch();
}