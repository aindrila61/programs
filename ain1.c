#include<stdio.h>
int prime(int n)
{
    int count=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            count=1;


    }

    if(count==0)
        return "prime";
    else
        return "not prime";




}
int main()
{
    int num;
    printf("enter");
    scanf("%d",&num);
    printf("%s",prime(num));
}
