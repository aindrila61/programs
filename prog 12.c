int main()
{
    char * pt,str[20];
    printf("enter a string");
    scanf("%s",str);
    pt=str+1;
    if(str[0]=='x')
    {
        printf("%s",pt);
    }
    else
    {
        printf("%s",str);
    }

}
