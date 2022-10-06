#include<stdio.h>
int main()
{
    int rev=0,n,rem;
    printf("enter");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        printf("%d",rem);
        n/=10;
    }

}
