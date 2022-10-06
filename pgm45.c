#include<stdio.h>
int main()
{
    int num,res=0;
    printf("enter");
    scanf("%d",&num);
    res=prime(num);
    if(res==0)
        printf("number is prime:");
    else
        printf("not");
    getch();
}
int prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i!=0)
            continue;
            else
                return 1;


    }
    return 0;
}

   65555

