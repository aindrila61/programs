int main()
{
    char s1[20],s2[20];
    printf("enter s1 and s2");
    scanf("%s\n%s",&s1,&s2);
    fun1(s1);
    fun2(s2);

}
int fun1(char s1[])
{
    char a;
    a=strlen(s1);
    printf("%d\n",a);
}

int fun2(char s2[])
{

    printf("%s",strupr(s2));
}

















