#include<stdio.h>
int main()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    fun(n);


}
int fun(int n)
{
    int m,pdt=1,sum=0;
    while(n>0)
    {
        m=n%10;
        sum+=m;
        pdt*=m;
        n=n/10;


    }
    if(sum==pdt)
    {
        printf("spy no");

    }
    else
        printf("not spy");


}



