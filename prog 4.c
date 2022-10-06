int main()
{
    int a,b;
    printf("enter a and b");
    scanf("%d\n%d",&a,&b);
    fun(&a,&b);
}
int fun(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("%d\n%d",*a,*b);
     printf("\n%x\n%x",a,b);
}
