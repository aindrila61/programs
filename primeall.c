#include<stdio.h>
int prime(int n)
{
    int count,a;
    printf("Enter");
    scanf("%d",&n);

    for( a=1;a<=n;a++)
    {
        count=0;
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
               count++;

        }
        if(count==0&&a!=1)
             printf("%d\n",a);


    }


}
int main()
{
 int n;
 prime(n);
}
