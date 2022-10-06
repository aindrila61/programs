int add(int a[],int sum)
{
    for(int i=0;i<a;i++)
    {
        sum=sum+a[i];
        printf("%d\n",sum);
    }
}
int fun(int fact)
{
    fact=fact*(fact-1);
    printf("%d",fact);
}
int main()
{
    int a,sum,fact;
    printf("enter an a");
    scanf("%d",&a);
    add(a,sum);
    fun(fact);

}
