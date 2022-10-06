#include<stdio.h>
int odd_even(int n)
{
    if((n&1)==0)
    {
        printf("even");
    }
    else
        printf("odd");

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%s",odd_even(n));
}
