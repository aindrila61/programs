char * display();
void main()
{
    char *str;
    str=display();
    printf("%s",str);
    str[0]='k';
     printf("\n%s",str);
}
char * display()
{

   static char str[]="hello";
    return str;
}

