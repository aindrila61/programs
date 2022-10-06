#include<stdio.h>
int sum(n)
{

if(n==6)
    return "true";
else
    return "false";
}

int main()

{
    int i,n;
    printf("enter");
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    int x=a[0];
    printf("%s",sum(x));





}
