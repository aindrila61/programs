int tsum(int n)
{
    int last,sum=0,org=n;
    while(n!=0)
    {
        last=n%10;
        n=n/10;
        sum=sum+fact(last);
    }
    if(org==sum)
    {
        printf("strong number");
    }
    else
    {
        printf("not strong number");
    }
}

int fact(int num)
{
    int fact=1,i;
    for(i=1;i<=num;i++)
        fact=fact*i;
        return fact;

}

void main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    tsum(n);

}
