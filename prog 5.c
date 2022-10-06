int num(int a)
{
    int b;
    b=a;
     printf("%d",b);

}
int main()
{
    int a,b;
    int(*p)(int)=num;
    printf("enter a\n");
    scanf("%d",&a);

    b=(*p)(a);

}
